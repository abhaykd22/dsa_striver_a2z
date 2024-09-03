#include <iostream>
#include <string>
using namespace std;

int isIntPalindrome(int x){
	int finalNum = 0;
	int originalNum = x;
	while(x){
		finalNum = finalNum*10 + x%10;
		x/=10;
	}
	return originalNum == finalNum;
}

int isStringPalindrome(string str){
	string reversedStr = str;
	int i = 0, j = str.length() - 1;
	while(i<j){
		char temp = reversedStr[i];
		reversedStr[i] = reversedStr[j];
		reversedStr[j] = temp; 
		i++;j--;
	}
	return str == reversedStr;

}

int main(){
	int num;
	cin >> num;
	cout << isIntPalindrome(num) << "\n";

	string str;
	cin >> str;
	cout << isStringPalindrome(str) << "\n";
	
	return 0;
}

