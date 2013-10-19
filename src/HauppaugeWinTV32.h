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

#define DEBUG true

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

void translate_ir(uint_16 ir_code) {
	// Menu - Menu - 1F8D / 178D - C - 67
	if (ir_code == 0x1F8D || ir_code == 0x178D) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("C");
			Serial.println("----------------");
		#endif
		Keyboard.write(67);
	}
	// XBMC - Go - 1FBB / 17BB - Win + 1 (First pinned app in Windows 7) - KEY_LEFT_GUI + 49
	else if (ir_code == 0x1FBB || ir_code == 0x17BB) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Win + 1");
			Serial.println("----------------");
		#endif
		Keyboard.press(KEY_LEFT_GUI);
		Keyboard.press(49);
		delay(100);
		Keyboard.releaseAll();
	}
}
