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

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

void translate_ir(unsigned long code) {
	//UpArrow - Aspect - D19D2C28 - Z
	if (code == 0xD19D2C28) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Z");
			Serial.println("----------------");
		#endif
		Keyboard.write(122);
	}
	//Menu - Media - 27CFDF92 - C
	else if (code == 0x27CFDF92) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("C");
			Serial.println("----------------");
		#endif
		Keyboard.write(99);
	}
	//Info - Info - BD282D36 - I
	else if (code == 0xBD282D36) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("I");
			Serial.println("----------------");
		#endif
		Keyboard.write(105);
	}
	//Exit - Ctrl+Z - C315F508 - Esc
	else if (code == 0xC315F508) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Escape");
			Serial.println("----------------");
		#endif
		Keyboard.write(177);
	}
	//Guide - Guide - CE9D2771 - Tab
	else if (code == 0xCE9D2771) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Tab");
			Serial.println("----------------");
		#endif
		Keyboard.write(179);
	}
	//Red - Red - 169C912C - \ (Fullscreen/Window)
	else if (code == 0x169C912C) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("\\");
			Serial.println("----------------");
		#endif
		Keyboard.write(92);
	}
	//Green - Green - 53F88070 - M (OSD)
	else if (code == 0x53F88070) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("M");
			Serial.println("----------------");
		#endif
		Keyboard.write(109);
	}
	//Yellow - Yellow - FBB85526 - O (Codec Info)
	else if (code == 0xFBB85526) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("O");
			Serial.println("----------------");
		#endif
		Keyboard.write(111);
	}
	//Blue - Blue - C6A7A8A7 - W (Watched/Unwatched)
	else if (code == 0xC6A7A8A7) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("W");
			Serial.println("----------------");
		#endif
		Keyboard.write(119);
	}
	//Up - DirectionUp - A36FD29F - Up
	else if (code == 0xA36FD29F) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Up");
			Serial.println("----------------");
		#endif
		Keyboard.write(218);
	}
	//Down - DirectionDown - E696EE - Down
	else if (code == 0xE696EE) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Down");
			Serial.println("----------------");
		#endif
		Keyboard.write(217);
	}
	//Left - DirectionLeft - 634A7668 - Left
	else if (code == 0x634A7668) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Left");
			Serial.println("----------------");
		#endif
		Keyboard.write(216);
	}
	//Right - DirectionRight - 8E1449A9 - Right
	else if (code == 0x8E1449A9) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Right");
			Serial.println("----------------");
		#endif
		Keyboard.write(215);
	}
	//OK - OK - EC9BC835 - Enter
	else if (code == 0xEC9BC835) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Enter");
			Serial.println("----------------");
		#endif
		Keyboard.write(176);
	}
	//Channel Up - ChannelUp - 92BD3BC9 - [
	else if (code == 0x92BD3BC9) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("[");
			Serial.println("----------------");
		#endif
		Keyboard.write(91);
	}
	//Channel Down - ChannelDown - 7B3D44CC - ]
	else if (code == 0x7B3D44CC) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("]");
			Serial.println("----------------");
		#endif
		Keyboard.write(93);
	}
	//Prev - Ctrl+Shift+Tab - 88804B2B - Backspace
	else if (code == 0x88804B2B) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Backspace");
			Serial.println("----------------");
		#endif
		Keyboard.write(178);
	}
	//Play - Play - E20C15A3 - Space
	else if (code == 0xE20C15A3) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Space");
			Serial.println("----------------");
		#endif
		Keyboard.write(32);
	}
	//Pause - Pause - A8FFA988 - Space
	else if (code == 0xA8FFA988) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Space");
			Serial.println("----------------");
		#endif
		Keyboard.write(32);
	}
	//Fast Forward - FastForward - 1EF2C5C6 - F
	else if (code == 0x1EF2C5C6) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("F");
			Serial.println("----------------");
		#endif
		Keyboard.write(102);
	}
	//Skip Forward - Skip - A38ADFDF - .
	else if (code == 0xA38ADFDF) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println(".");
			Serial.println("----------------");
		#endif
		Keyboard.write(46);
	}
	//Skip Back - Replay - 8E0AEC08 - ,
	else if (code == 0x8E0AEC08) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println(",");
			Serial.println("----------------");
		#endif
		Keyboard.write(44);
	}
	//Rewind - Rewind - 6A8BC852 - R
	else if (code == 0x6A8BC852) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("R");
			Serial.println("----------------");
		#endif
		Keyboard.write(114);
	}
	//Record - Record - E10C140E - B
	else if (code == 0xE10C140E) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("B");
			Serial.println("----------------");
		#endif
		Keyboard.write(98);
	}
	//Stop - Stop - 14924D85 - X
	else if (code == 0x14924D85) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("X");
			Serial.println("----------------");
		#endif
		Keyboard.write(120);
	}
	//1 - 1 - F6A075A7 - 1
	else if (code == 0xF6A075A7) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("1");
			Serial.println("----------------");
		#endif
		Keyboard.write(49);
	}
	//2 - 2 - 2C14BC67 - 2
	else if (code == 0xF6A075A7) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("2");
			Serial.println("----------------");
		#endif
		Keyboard.write(50);
	}
	//3 - 3 - CE9DF816 - 3
	else if (code == 0xCE9DF816) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("3");
			Serial.println("----------------");
		#endif
		Keyboard.write(51);
	}
	//4 - 4 - A98524DC - 4
	else if (code == 0xA98524DC) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("4");
			Serial.println("----------------");
		#endif
		Keyboard.write(52);
	}
	//5 - 5 - 314E8E10 - 5
	else if (code == 0x314E8E10) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("5");
			Serial.println("----------------");
		#endif
		Keyboard.write(53);
	}
	//6 - 6 - EED10E23 - 6
	else if (code == 0xEED10E23) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("6");
			Serial.println("----------------");
		#endif
		Keyboard.write(54);
	}
	//7 - 7 - 8F5A46AA - 7
	else if (code == 0x8F5A46AA) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("7");
			Serial.println("----------------");
		#endif
		Keyboard.write(55);
	}
	//8 - 8 - 9610F80C - 8
	else if (code == 0x9610F80C) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("8");
			Serial.println("----------------");
		#endif
		Keyboard.write(56);
	}
	//9 - 9 - D6693D25 - 9
	else if (code == 0xD6693D25) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("9");
			Serial.println("----------------");
		#endif
		Keyboard.write(57);
	}
	//Plus - # - 8F37704C - # 
	else if (code == 0x8F37704C) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("#");
			Serial.println("----------------");
		#endif
		Keyboard.write(35);
	}
	//0 - 0 - E42869D6 - 0
	else if (code == 0xE42869D6) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("0");
			Serial.println("----------------");
		#endif
		Keyboard.write(48);
	}
	//E - Enter - C4E6B502 - Enter
	else if (code == 0xC4E6B502) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Enter");
			Serial.println("----------------");
		#endif
		Keyboard.write(176);
	}
	//Switch User - Alt+Tab - 826F1729 - S
	else if (code == 0x826F1729) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("S");
			Serial.println("----------------");
		#endif
		Keyboard.write(115);
	}
	//Log Off - Alt+F4 - 511B4D0D - S
	else if (code == 0x511B4D0D) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("S");
			Serial.println("----------------");
		#endif
		Keyboard.write(115);
	}
	//Subtitles - Subtitle - 449BE55C - T
	else if (code == 0x449BE55C) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("T");
			Serial.println("----------------");
		#endif
		Keyboard.write(116);
	}
	//Cycle Subs - Teletext - AA030263 - L
	else if (code == 0xAA030263) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("L");
			Serial.println("----------------");
		#endif
		Keyboard.write(108);
	}
	//Recorded TV - RecordedTV - 5F21D76A - K
	else if (code == 0x5F21D76A) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("K");
			Serial.println("----------------");
		#endif
		Keyboard.write(107);
	}
	//OSD - Alt+1 - AA2B6903 - M
	else if (code == 0xAA2B6903) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("M");
			Serial.println("----------------");
		#endif
		Keyboard.write(109);
	}
	//Codec Info - Alt+2 - BAF8B8B9 - O
	else if (code == 0xBAF8B8B9) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("O");
			Serial.println("----------------");
		#endif
		Keyboard.write(111);
	}
}
