/*
Copyright 2013 Michael Crosson

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <SPI.h>
#include <mcp4xxx.h>

#define DEBUG       false
#define PIN_LED     12
#define PIN_POT_POWER 11
#define PIN_POT_BLINK 10
#define CORE_LED0_PIN 12
#define PIN_IR_RECV 9
#define IR_REPEAT_DELAY_MS 300

icecave::arduino::MCP4XXX* pot_power;
icecave::arduino::MCP4XXX* pot_blink;

#include <IRLib.h>

#include "HauppaugeWinTV32.h"

IRrecv IRReceiver(PIN_IR_RECV);
IRdecode IRDecoder;
unsigned int Buffer[RAWBUF];

// Implemented in the specific remote header file
void translate_ir(uint16_t ir_code);

void setup() {
	#if defined(DEBUG) && DEBUG == true
		Serial.begin(57600);
		while (!Serial);
	#endif

	pot_blink = new icecave::arduino::MCP4XXX(PIN_POT_BLINK);
	pot_power = new icecave::arduino::MCP4XXX(PIN_POT_POWER);

	IRReceiver.enableIRIn(); // Start the receiver
	IRReceiver.blink13(true);
	IRDecoder.UseExtnBuf(Buffer);

	Keyboard.begin();
}

void loop() {
	if (IRReceiver.GetResults(&IRDecoder)) {
		delay(IR_REPEAT_DELAY_MS); // Make sure we don't get excess codes thanks to the Logitech Harmony sending groups of 3 for most protocols
		IRReceiver.resume();
		IRDecoder.decode();
		translate_ir(IRDecoder.value);
	}
}
