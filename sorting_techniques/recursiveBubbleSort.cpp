#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n){
	if(n == 1) return;
	bool swapped = false;
	for(int j = 0; j<n-1; j++){
		if(arr[j] > arr[j+1]){
			swap(arr[j], arr[j+1]);		
			swapped = true;		
		}
	}
	if(!swapped) return;
	bubble_sort(arr, n-1);
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int& i : arr) cin >> i;
	bubble_sort(arr, n);
	for(int& i : arr) cout << i << " ";
	return 0;
}