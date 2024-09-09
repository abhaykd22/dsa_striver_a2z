#include <iostream>
#include <climits>
using namespace std;

bool isArraySorted(int* arr, int n){
	for(int j = 1; j<n; j++){
		if(arr[j] < arr[j-1]) return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int& i : arr) cin >> i;
	cout << isArraySorted(arr, n) << "\n";
	return 0;
}