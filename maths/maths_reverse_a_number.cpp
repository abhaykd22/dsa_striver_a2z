#include <iostream>
#include <string>
using namespace std;

int reverseIntInput(int x){
	int finalNum = 0;
	while(x){
		finalNum = finalNum*10 + x%10;
		x/=10;
	}
	return finalNum;
}

int reverseStringInput(string str){
	int num = 0;
	for(int i = str.length() - 1; i>=0; i--){
		num = num*10 + (str[i]-'0');
	}
	return num;
}

int main(){
	int num;
	cin >> num;
	cout << reverseIntInput(num) << "\n";

	string str;
	cin >> str;
	cout << reverseStringInput(str) << "\n";
	
	return 0;
}

