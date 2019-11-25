#include<iostream>
#include<string>
#include "MERCY.h"

using namespace std;

void MERCY::Run() {
	int n;
	cin >> n;

	if (n > 1 & n <= 10) {
		string Algospot = "Hello Algospot!";

		for (int i = 0; i < n; i++) {
			cout << Algospot << endl;
		}
	}
}