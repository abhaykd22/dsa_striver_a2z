#include <iostream>
#define ll long long 

using namespace std;

int getNumberOfDigits(int num){
	int digits = 0;
	while(num){
		digits++;
		num /= 10;
	}
	return digits;
}

ll raisePow(ll a, int b){
	return b ? (b % 2 ? a * raisePow(a, b-1) : raisePow(a*a, b/2)) : 1;
}

ll isNumberArmstrong(ll a){
    ll initialVal = a, calculatedVal = 0;
    int numOfDigits = getNumberOfDigits(a);
    while(a){
    	calculatedVal += raisePow(a%10, numOfDigits);
    	a/=10;
    }
    return initialVal == calculatedVal;
}


int main(){
	ll num;
	cin >> num;
	cout << isNumberArmstrong(num) << "\n";
	return 0;
}
