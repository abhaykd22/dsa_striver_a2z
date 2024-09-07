#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int& i : arr) cin >> i;
	unordered_map<int, int> mp;
	for(auto i : arr){
		mp[i]++;
	}
	for(auto i : mp){
		cout << i.first << " " << i.second << "\n";
	}
	return 0;
}