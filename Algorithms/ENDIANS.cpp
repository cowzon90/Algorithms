#include<iostream>
#include "ENDIANS.h"

using namespace std;

void ENDIANS::Run() {

	// Example
	// 32-bit unsigned integer 305,419,896 (0x12345678)
	// Blefuscu : 00010010 00110100 01010110 01111000
	// Liliput  : 01111000 01010110 00110100 00010010
	// convert Blefuscu to Liliput

	// Read Test Case.
	int testCase;
	std::cin >> testCase;

	// Read Values
	uint32_t *blefuscu = new uint32_t[testCase];

	for (int i = 0; i < testCase; i++) {
		cin >> blefuscu[i];
	}

	// Changes
	for (int i = 0; i < testCase; i++) {
		ConvertEndians(blefuscu[i]);
	}

	return;
}

void ENDIANS::ConvertEndians(uint32_t blefuscu) {

	int byte[4];

	byte[0] = blefuscu & 0x000000ff;
	byte[1] = (blefuscu & 0x0000ff00) >> 8;
	byte[2] = (blefuscu & 0x00ff0000) >> 16;
	byte[3] = (blefuscu & 0xff000000) >> 24;

	// Change
	uint32_t change = 0x00000000;

	change |= (byte[0] << 24);
	change |= (byte[1] << 16);
	change |= (byte[2] << 8);
	change |= (byte[3]);

	cout << change << endl;
}