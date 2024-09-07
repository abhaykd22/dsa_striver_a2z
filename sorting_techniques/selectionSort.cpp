#include <iostream>

using namespace std;

void selection_sort(int arr[], int n){
	for(int i = 0; i<n-1; i++){
		int min_idx = i;
		for(int j = i+1; j<n; j++){
			if(arr[j] < arr[min_idx]) min_idx = j;
		}
		if(i != min_idx){
			swap(arr[i], arr[min_idx]);
		}
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int& i : arr) cin >> i;
	selection_sort(arr, n);
	for(int& i : arr) cout << i << " ";
	return 0;
}