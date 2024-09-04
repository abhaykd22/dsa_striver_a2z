#include <iostream>
#include <string>
#define ll long long 

using namespace std;

bool isPalindrome(string& str, int j, int i = 0){
	if(i>=j) return true;
	return str[i] == str[j] ? isPalindrome(str, j-1, i+1) : false;
}

int main(){
	string str;
	cin >> str;
	cout << isPalindrome(str, str.length() - 1) << "\n";
	return 0;
}
