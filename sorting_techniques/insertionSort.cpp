#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n){
	for(int i = 1; i<n; i++){
		int el = arr[i];
		int j = i-1;
		while(j>=0 && arr[j] > el){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = el;
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int& i : arr) cin >> i;
	insertion_sort(arr, n);
	for(int& i : arr) cout << i << " ";
	return 0;
}