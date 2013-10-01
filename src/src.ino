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

/*
  See http://www.righto.com/2010/12/64-bit-rc6-codes-arduino-and-xbox.html
  and http://www.righto.com/2009/08/multi-protocol-infrared-remote-library.html
  For details on how to use the IRremote library
*/

#include <IRremote.h>

#include "RemoteWinMediaCenterSE.h"

#define DEBUG       true

#define PIN_LED     9
#define PIN_IR_RECV 6

#define IR_DELAY_MS 1000

IRrecv irrecv(PIN_IR_RECV);
decode_results ir_results;

// Implemented in the specific remote header file
void translate_ir(unsigned long code);

void setup() {
	#if defined(DEBUG) && DEBUG == true
		Serial.begin(9600);
	#endif

	pinMode(PIN_LED, OUTPUT);

	irrecv.enableIRIn();

	Keyboard.begin();
}

void loop() {
	if (irrecv.decode(&ir_results)) {
		translate_ir(ir_results.value);
		#if defined(DEBUG) && DEBUG == true
			Serial.println(ir_results.value, HEX);
			Serial.println("----------------");
		#endif
		delay(IR_DELAY_MS);
		irrecv.resume();
	}
}

