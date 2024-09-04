#include <iostream>
#define ll long long 

using namespace std;

ll computeFactorial(int num){
	return num ? num * computeFactorial(num-1) : 1;
}

int main(){
	int num;
	cin >> num;
	cout << computeFactorial(num) << "\n";
	return 0;
}
