#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long 

using namespace std;

bool isPrime(int num){
	for(int i = 2; i*i<=num; i++){
		if(num % i == 0) return false;
	}
	return true;
}

int main(){
	ll num;
	cin >> num;
	cout << isPrime(num) << "\n";
	return 0;
}
