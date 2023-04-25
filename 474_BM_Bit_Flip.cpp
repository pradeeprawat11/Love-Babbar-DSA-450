#include<iostream>
using namespace std;

int main() {
	int a = 20;
	int b = 25;

	int flipped = a ^ b;

	int count=0;
	while(flipped != 0) {
		int rsb = flipped & -flipped;
		flipped -= rsb;
		count++;
	}

	cout << "No. of bits change to convert a to b are :" << endl;
	cout << count;
	return 0;
}