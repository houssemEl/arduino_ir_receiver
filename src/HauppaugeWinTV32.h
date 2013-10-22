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

#define DEBUG false

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

void translate_ir(uint16_t ir_code) {
	// Menu - Menu - 1F8D / 178D - C - 67
	if (ir_code == 0x1F8D || ir_code == 0x178D) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("C");
			Serial.println("----------------");
		#endif
		Keyboard.write(99);
	}
	// Info - Info - 1F8A / 178A - I - 73
	else if (ir_code == 0x1F8A || ir_code == 0x178A) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("I");
			Serial.println("----------------");
		#endif
		Keyboard.write(105);
	}
	// Exit - Exit - 1F9F / 179F - Esc - KEY_ESC
	else if (ir_code == 0x1F9F || ir_code == 0x179F) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Esc");
			Serial.println("----------------");
		#endif
		Keyboard.write(KEY_ESC);
	}
	// Guide - Guide - 1F9B / 179B - Tab - KEY_TAB
	else if (ir_code == 0x1F9B || ir_code == 0x179B) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Tab");
			Serial.println("----------------");
		#endif
		Keyboard.write(KEY_TAB);
	}
	// Red - Red - 1F8B / 178B - \ (Fullscreen/Window) - 92
	else if (ir_code == 0x1F8B || ir_code == 0x178B) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("\\");
			Serial.println("----------------");
		#endif
		Keyboard.write(92);
	}
	// Green - Green - 1FAE / 17AE - M (OSD) - 77
	else if (ir_code == 0x1FAE || ir_code == 0x17AE) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("M");
			Serial.println("----------------");
		#endif
		Keyboard.write(109);
	}
	// Yellow - Yellow - 1FB8 / 17B8 - O (Codec Info) - 81
	else if (ir_code == 0x1FB8 || ir_code == 0x17B8) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("O");
			Serial.println("----------------");
		#endif
		Keyboard.write(111);
	}
	// Blue - Blue - 1FA9 / 17A9 - W (Watched/Unwatched) - 87
	else if (ir_code == 0x1FA9 || ir_code == 0x17A9) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("W");
			Serial.println("----------------");
		#endif
		Keyboard.write(119);
	}
	// Up - DirectionUp - 1F94 / 1794 - Up - KEY_UP_ARROW
	else if (ir_code == 0x1F94 || ir_code == 0x1794) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Up");
			Serial.println("----------------");
		#endif
		Keyboard.write(KEY_UP_ARROW);
	}
	// Down - DirectionDown - 1F95 / 1795 - Down - KEY_DOWN_ARROW
	else if (ir_code == 0x1F95 || ir_code == 0x1795) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Down");
			Serial.println("----------------");
		#endif
		Keyboard.write(KEY_DOWN_ARROW);
	}
	// Left - DirectionLeft - 1F96 / 1796 - Left - KEY_LEFT_ARROW
	else if (ir_code == 0x1F96 || ir_code == 0x1796) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Left");
			Serial.println("----------------");
		#endif
		Keyboard.write(KEY_LEFT_ARROW);
	}
	// Right - DirectionRight - 1F97 / 1797 - Right - KEY_RIGHT_ARROW
	else if (ir_code == 0x1F97 || ir_code == 0x1797) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Right");
			Serial.println("----------------");
		#endif
		Keyboard.write(KEY_RIGHT_ARROW);
	}
	// OK - Select - 1FA5 / 17A5 - Enter - KEY_RETURN
	else if (ir_code == 0x1FA5 || ir_code == 0x17A5) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Return/Enter");
			Serial.println("----------------");
		#endif
		Keyboard.write(KEY_RETURN);
	}
	// Volume Up - VolumeUp - 1F90 / 1790 - N/A
	else if (ir_code == 0x1F90 || ir_code == 0x1790) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("N/A");
			Serial.println("----------------");
		#endif
		//Keyboard.write(-1);
	}
	// Volume Down - VolumeDown - 1F91 / 1791 - N/A
	else if (ir_code == 0x1F91 || ir_code == 0x1791) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("N/A");
			Serial.println("----------------");
		#endif
		//Keyboard.write(-1);
	}
	// Channel Up - ChannelUp - 1FA0 / 17A0 - [ - 91
	else if (ir_code == 0x1FA0 || ir_code == 0x17A0) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("[");
			Serial.println("----------------");
		#endif
		Keyboard.write(91);
	}
	// Channel Down - ChannelDown - 1FA1 / 17A1 - ] - 93
	else if (ir_code == 0x1FA1 || ir_code == 0x17A1) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("]");
			Serial.println("----------------");
		#endif
		Keyboard.write(93);
	}
	// Mute - Mute - 1F8F / 178F - N/A
	else if (ir_code == 0x1F8F || ir_code == 0x178F) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("N/A");
			Serial.println("----------------");
		#endif
		//Keyboard.write(-1);
	}
	// Prev - ChannelPrev - 1F92 / 1792 - Backspace - KEY_BACKSPACE 
	else if (ir_code == 0x1F92 || ir_code == 0x1792) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Backspace");
			Serial.println("----------------");
		#endif
		Keyboard.write(KEY_BACKSPACE);
	}
	// Play - Play - 1FB5 / 17B5 - Space - 32
	else if (ir_code == 0x1FB5 || ir_code == 0x17B5) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Space");
			Serial.println("----------------");
		#endif
		Keyboard.write(32);
	}
	// Pause - Pause - 1FB0 / 17B0 - Space - 32
	else if (ir_code == 0x1FB0 || ir_code == 0x17B0) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("Space");
			Serial.println("----------------");
		#endif
		Keyboard.write(32);
	}
	// Fast Forward - FastForward - 1FB4 / 17B4 - F - 70
	else if (ir_code == 0x1FB4 || ir_code == 0x17B4) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("F");
			Serial.println("----------------");
		#endif
		Keyboard.write(102);
	}
	// Skip Forward - Advance - 1F9E / 179E - . - 46
	else if (ir_code == 0x1F9E || ir_code == 0x179E) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println(".");
			Serial.println("----------------");
		#endif
		Keyboard.write(46);
	}
	// Skip Back - Replay - 1FA4 / 17A4 - , - 44
	else if (ir_code == 0x1FA4 || ir_code == 0x17A4) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println(",");
			Serial.println("----------------");
		#endif
		Keyboard.write(44);
	}
	// Rewind - Rewind - 1FB2 / 17B2 - R - 82
	else if (ir_code == 0x1FB2 || ir_code == 0x17B2) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("R");
			Serial.println("----------------");
		#endif
		Keyboard.write(114);
	}
	// Record - Record - 1FB7 / 17B7 - B - 66
	else if (ir_code == 0x1FB7 || ir_code == 0x17B7) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("B");
			Serial.println("----------------");
		#endif
		Keyboard.write(98);
	}
	// Stop - Stop - 1FB6 / 17B6 - X - 88
	else if (ir_code == 0x1FB6 || ir_code == 0x17B6) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("X");
			Serial.println("----------------");
		#endif
		Keyboard.write(120);
	}
	// 1 - 1 - 1F81 / 1781 - 1 - 49
	else if (ir_code == 0x1F81 || ir_code == 0x1781) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("1");
			Serial.println("----------------");
		#endif
		Keyboard.write(49);
	}
	// 2 - 2 - 1F82 / 1782 - 2 - 50
	else if (ir_code == 0x1F82 || ir_code == 0x1782) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("2");
			Serial.println("----------------");
		#endif
		Keyboard.write(50);
	}
	// 3 - 3 - 1F83 / 1783 - 3 - 51
	else if (ir_code == 0x1F83 || ir_code == 0x1783) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("3");
			Serial.println("----------------");
		#endif
		Keyboard.write(51);
	}
	// 4 - 4 - 1F84 / 1784 - 4 - 52
	else if (ir_code == 0x1F84 || ir_code == 0x1784) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("4");
			Serial.println("----------------");
		#endif
		Keyboard.write(52);
	}
	// 5 - 5 - 1F85 / 1785 - 5 - 53
	else if (ir_code == 0x1F85 || ir_code == 0x1785) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("5");
			Serial.println("----------------");
		#endif
		Keyboard.write(53);
	}
	// 6 - 6 - 1F86 / 1786 - 6 - 54
	else if (ir_code == 0x1F86 || ir_code == 0x1786) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("6");
			Serial.println("----------------");
		#endif
		Keyboard.write(54);
	}
	// 7 - 7 - 1F87 / 1787 - 7 - 55
	else if (ir_code == 0x1F87 || ir_code == 0x1787) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("7");
			Serial.println("----------------");
		#endif
		Keyboard.write(55);
	}
	// 8 - 8 - 1F88 / 1788 - 8 - 56
	else if (ir_code == 0x1F88 || ir_code == 0x1788) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("8");
			Serial.println("----------------");
		#endif
		Keyboard.write(56);
	}
	// 9 - 9 - 1F89 / 1789 - 9 - 57
	else if (ir_code == 0x1F89 || ir_code == 0x1789) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("9");
			Serial.println("----------------");
		#endif
		Keyboard.write(57);
	}
	// 0 - 0 - 1F80 / 1780 - 0 - 48
	else if (ir_code == 0x1F80 || ir_code == 0x1780) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("0");
			Serial.println("----------------");
		#endif
		Keyboard.write(48);
	}

	// Switch User - InputTv - 1F9C / 179C - S - 83
	else if (ir_code == 0x1F9C || ir_code == 0x179C) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("S");
			Serial.println("----------------");
		#endif
		Keyboard.write(115);
	}
	// Log Off - InputVideos - 1F98 / 1798 - S - 83
	else if (ir_code == 0x1F98 || ir_code == 0x1798) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("S");
			Serial.println("----------------");
		#endif
		Keyboard.write(115);
	}
	// Subtitles - InputMusic - 1F99 / 1799 - T - 84
	else if (ir_code == 0x1F99 || ir_code == 0x1799) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("T");
			Serial.println("----------------");
		#endif
		Keyboard.write(116);
	}
	// Cycle Subs - InputPictures - 1F9A / 179A - L - 76
	else if (ir_code == 0x1F9A || ir_code == 0x179A) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("L");
			Serial.println("----------------");
		#endif
		Keyboard.write(108);
	}

	// OSD - InputRadio - 1F8C / 178C - M - 77
	else if (ir_code == 0x1F8C || ir_code == 0x178C) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("M");
			Serial.println("----------------");
		#endif
		Keyboard.write(109);
	}
	// Codec Info - NumberEnter - 1F8E / 178E - O - 79
	else if (ir_code == 0x1F8E || ir_code == 0x178E) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("O");
			Serial.println("----------------");
		#endif
		Keyboard.write(111);
	}
	// Power Toggle - PowerToggle - 1FBD / 17BD - N/A
	else if (ir_code == 0x1FBD || ir_code == 0x17BD) {
		#if defined(DEBUG) && DEBUG == true
			Serial.println("N/A");
			Serial.println("----------------");
		#endif
		//Keyboard.write(-1);
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
