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

#include <IRLib.h>

#include "HauppaugeWinTV32.h"

#define DEBUG       true

#define PIN_LED     6
#define PIN_IR_RECV 9

#define IR_REPEAT_DELAY_MS 250

IRrecv IRReceiver(PIN_IR_RECV);
IRdecode IRDecoder;
unsigned int Buffer[RAWBUF];

// Implemented in the specific remote header file
void translate_ir(unsigned long long code);

void setup() {
	#if defined(DEBUG) && DEBUG == true
		Serial.begin(57600);
	#endif

	pinMode(PIN_LED, OUTPUT);

	My_Receiver.enableIRIn(); // Start the receiver
	IRDecoder.UseExtnBuf(Buffer);

	Keyboard.begin();
}

void loop() {
	if (IRReceiver.GetResults(&IRDecoder)) {
		//Restart the receiver so it can be capturing another code
		//while we are working on decoding this one.
		IRReceiver.resume(); 
		IRDecoder.decode();
		IRDecoder.DumpResults();
	}

	delay(IR_REPEAT_DELAY_MS);
}
