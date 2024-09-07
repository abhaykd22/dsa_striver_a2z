#include <iostream>

using namespace std;

void merge(int* arr, int s, int m, int e){
	cout << " s : " << s << " m : " << m << " e : " << e << "\n";
	int i = s, j = m+1, idx = 0;
	int temp[e-s+1];
	while(i <= m && j <= e){
		if(arr[i] < arr[j]){
			temp[idx++] = arr[i];
			i++;
		}else{
			temp[idx++] = arr[j];
			j++;
		}
	}
	while(i<=m){
		temp[idx++] = arr[i++];
	}
	while(j<=e){
		temp[idx++] = arr[j++];
	}
	idx = 0;
	i = s;
	while(i<=e){
		arr[i++] = temp[idx++];
	}

}

void merge_sort(int arr[], int i, int j){
	if(i < j){
		int m = (i+j)/2;
		merge_sort(arr, i, m);
		merge_sort(arr, m+1, j);
		merge(arr, i, m, j);
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int& i : arr) cin >> i;
	merge_sort(arr, 0, n-1);
	for(int& i : arr) cout << i << " ";
	return 0;
}