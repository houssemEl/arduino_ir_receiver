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

void translate_ir(unsigned long long code) {
	//UpArrow - Aspect - - Z
	if ((code & ~0x8000LL) == /*0xc800f740cLL*/) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Z");
			Serial.println("----------------");
		#endif
		Keyboard.write(122);
	}/*
	//Menu - Media - - C
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("C");
			Serial.println("----------------");
		#endif
		Keyboard.write(99);
	}
	//Info - Info - - I
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("I");
			Serial.println("----------------");
		#endif
		Keyboard.write(105);
	}
	//Exit - Ctrl+Z - - Esc
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Escape");
			Serial.println("----------------");
		#endif
		Keyboard.write(177);
	}
	//Guide - Guide - - Tab
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Tab");
			Serial.println("----------------");
		#endif
		Keyboard.write(179);
	}
	//Red - Red - - \ (Fullscreen/Window)
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("\\");
			Serial.println("----------------");
		#endif
		Keyboard.write(92);
	}
	//Green - Green - - M (OSD)
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("M");
			Serial.println("----------------");
		#endif
		Keyboard.write(109);
	}
	//Yellow - Yellow - - O ((code & ~0x8000LL)c Info)
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("O");
			Serial.println("----------------");
		#endif
		Keyboard.write(111);
	}
	//Blue - Blue - - W (Watched/Unwatched)
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("W");
			Serial.println("----------------");
		#endif
		Keyboard.write(119);
	}
	//Up - DirectionUp - - Up
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Up");
			Serial.println("----------------");
		#endif
		Keyboard.write(218);
	}
	//Down - DirectionDown - - Down
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Down");
			Serial.println("----------------");
		#endif
		Keyboard.write(217);
	}
	//Left - DirectionLeft - - Left
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Left");
			Serial.println("----------------");
		#endif
		Keyboard.write(216);
	}
	//Right - DirectionRight - - Right
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Right");
			Serial.println("----------------");
		#endif
		Keyboard.write(215);
	}
	//OK - OK - - Enter
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Enter");
			Serial.println("----------------");
		#endif
		Keyboard.write(176);
	}
	//Channel Up - ChannelUp - - [
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("[");
			Serial.println("----------------");
		#endif
		Keyboard.write(91);
	}
	//Channel Down - ChannelDown - - ]
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("]");
			Serial.println("----------------");
		#endif
		Keyboard.write(93);
	}
	//Prev - Ctrl+Shift+Tab - - Backspace
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Backspace");
			Serial.println("----------------");
		#endif
		Keyboard.write(178);
	}
	//Play - Play - - Space
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Space");
			Serial.println("----------------");
		#endif
		Keyboard.write(32);
	}
	//Pause - Pause - - Space
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Space");
			Serial.println("----------------");
		#endif
		Keyboard.write(32);
	}
	//Fast Forward - FastForward - - F
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("F");
			Serial.println("----------------");
		#endif
		Keyboard.write(102);
	}
	//Skip Forward - Skip - - .
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println(".");
			Serial.println("----------------");
		#endif
		Keyboard.write(46);
	}
	//Skip Back - Replay - - ,
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println(",");
			Serial.println("----------------");
		#endif
		Keyboard.write(44);
	}
	//Rewind - Rewind - - R
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("R");
			Serial.println("----------------");
		#endif
		Keyboard.write(114);
	}
	//Record - Record - - B
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("B");
			Serial.println("----------------");
		#endif
		Keyboard.write(98);
	}
	//Stop - Stop - - X
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("X");
			Serial.println("----------------");
		#endif
		Keyboard.write(120);
	}
	//1 - 1 - - 1
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("1");
			Serial.println("----------------");
		#endif
		Keyboard.write(49);
	}
	//2 - 2 - - 2
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("2");
			Serial.println("----------------");
		#endif
		Keyboard.write(50);
	}
	//3 - 3 - - 3
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("3");
			Serial.println("----------------");
		#endif
		Keyboard.write(51);
	}
	//4 - 4 - - 4
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("4");
			Serial.println("----------------");
		#endif
		Keyboard.write(52);
	}
	//5 - 5 - - 5
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("5");
			Serial.println("----------------");
		#endif
		Keyboard.write(53);
	}
	//6 - 6 - - 6
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("6");
			Serial.println("----------------");
		#endif
		Keyboard.write(54);
	}
	//7 - 7 - - 7
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("7");
			Serial.println("----------------");
		#endif
		Keyboard.write(55);
	}
	//8 - 8 - - 8
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("8");
			Serial.println("----------------");
		#endif
		Keyboard.write(56);
	}
	//9 - 9 - - 9
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("9");
			Serial.println("----------------");
		#endif
		Keyboard.write(57);
	}
	//Plus - # - - # 
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("#");
			Serial.println("----------------");
		#endif
		Keyboard.write(35);
	}
	//0 - 0 - - 0
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("0");
			Serial.println("----------------");
		#endif
		Keyboard.write(48);
	}
	//E - Enter - - Enter
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Enter");
			Serial.println("----------------");
		#endif
		Keyboard.write(176);
	}
	//Switch User - Alt+Tab - - S
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("S");
			Serial.println("----------------");
		#endif
		Keyboard.write(115);
	}
	//Log Off - Alt+F4 - - S
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("S");
			Serial.println("----------------");
		#endif
		Keyboard.write(115);
	}
	//Subtitles - Subtitle - - T
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("T");
			Serial.println("----------------");
		#endif
		Keyboard.write(116);
	}
	//Cycle Subs - Teletext - - L
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("L");
			Serial.println("----------------");
		#endif
		Keyboard.write(108);
	}
	//Recorded TV - RecordedTV - - K
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("K");
			Serial.println("----------------");
		#endif
		Keyboard.write(107);
	}
	//OSD - Alt+1 - - M
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("M");
			Serial.println("----------------");
		#endif
		Keyboard.write(109);
	}
	//Codec Info - Alt+2 - - O
	else if ((code & ~0x8000LL) == ) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("O");
			Serial.println("----------------");
		#endif
		Keyboard.write(111);
	}
*/
}
