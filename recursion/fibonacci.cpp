#include <iostream>
#include <string>
#define ll long long 

using namespace std;

ll computeFibonacci(int num){
	if(num == 0 || num == 1) return num;
	return computeFibonacci(num-1) + computeFibonacci(num-2);
}

int main(){
	int num;
	cin >> num;
	cout << computeFibonacci(num) << "\n";
	return 0;
}
