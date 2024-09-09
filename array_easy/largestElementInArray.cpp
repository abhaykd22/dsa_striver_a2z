#include <iostream>
#include <climits>
using namespace std;

int greatestElement(int* arr, int n){
	int maxEl = INT_MIN;
	for(int i = 0; i<n; i++){
		maxEl = max(maxEl, arr[i]);
	}
	return maxEl;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int& i : arr) cin >> i;
	cout << greatestElement(arr, n) << "\n";
	return 0;
}