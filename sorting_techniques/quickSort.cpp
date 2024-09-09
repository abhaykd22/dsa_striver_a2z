#include <iostream>

using namespace std;

int findPivot(int* arr, int x, int y){
	int pivot = arr[x];
	int i = x + 1;
	int j = i;
	while(i<=y){
		if(arr[i] <= pivot){
			swap(arr[i], arr[j]);
			j++;
		}
		i++;
	}
	swap(arr[j-1], arr[x]);
	return j-1;
}


void quick_sort(int arr[], int i, int j){
	if(i < j){
		cout << i << " " << j << "\n";
		int idx = findPivot(arr, i, j);
		quick_sort(arr, i, idx-1);
		quick_sort(arr, idx+1, j);
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int& i : arr) cin >> i;
	quick_sort(arr, 0, n-1);
	for(int& i : arr) cout << i << " ";
	return 0;
}