#include <iostream>
#include <climits>
using namespace std;

int secondLargestElement(int* arr, int n){
	int largest = INT_MIN, secondLargest = INT_MIN;
	for(int i = 0; i<n; i++){
		int el = arr[i];
		if(largest == INT_MIN){
			largest = el;
		}else if(el > largest){
			secondLargest = largest;
			largest = el;
		}else if(el > secondLargest){
			secondLargest = el;
		}
	}
	return secondLargest;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int& i : arr) cin >> i;
	cout << secondLargestElement(arr, n) << "\n";
	return 0;
}