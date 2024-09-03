#include <iostream>

using namespace std;

int getNumberOfDigitInNumberInput(int num){
	int digits = 0;
	while(num){
		digits++;
		num /= 10;
	}
	return digits;
}

int getNumberOfDigitInStringInput(string str){
	int i = 0;
	int len = str.length();
	while(str[i] == '0' && i < len) i++;
	int digits = 0;
	for(; i<len; i++, digits++);
	return digits;
}

int main(){
	// Input is a number
	int x;
	cin >> x;
	cout << getNumberOfDigitInNumberInput(x) << "\n";

	// Input is a string
	string str;
	cin >> str;
	cout << getNumberOfDigitInStringInput(str) << "\n";
	return 0;
}

