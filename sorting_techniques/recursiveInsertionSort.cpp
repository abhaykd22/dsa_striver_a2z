#include <iostream>

using namespace std;

void insertionSort(int arr[], int s, int e){
	if(s == e+1) return;
	int i = s-1, el = arr[s];
	while(i>=0 && arr[i] > el){
		arr[i+1] = arr[i];
		i--;
	}
	arr[i+1] = el;
	insertionSort(arr, s+1, e);
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int& i : arr) cin >> i;
	insertionSort(arr, 1, n-1);
	for(int& i : arr) cout << i << " ";
	return 0;
}