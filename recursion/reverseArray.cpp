#include <iostream>
#include <vector>
#define ll long long 

using namespace std;

void swap(vector<int>& arr, int i, int j){
	int t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

void reverseArray(vector<int>& arr, int j, int i = 0){
	if(j-i>0){
		swap(arr, i, j);
		reverseArray(arr, j-1, i+1);
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(auto& i : arr){
		cin >> i;
	}
	reverseArray(arr, n-1);
	for(auto i : arr){
		cout << i << " ";
	}
	return 0;
}
