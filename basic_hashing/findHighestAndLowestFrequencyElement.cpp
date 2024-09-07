#include <iostream>
#include <unordered_map>
#include <climits>
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
	int max_freq = 0, min_freq = INT_MAX;
	int max_freq_el = -1, min_freq_el = -1;
	for(auto i : mp){
		if(i.second > max_freq){
			max_freq_el = i.first;
			max_freq = i.second	;
		}

		if(i.second < min_freq){
			min_freq_el = i.first;
			min_freq = i.second;
		}
	}
	cout << "min : " << min_freq_el << " " << min_freq << "\n";
	cout << "max : " << max_freq_el << " " << max_freq << "\n";
	return 0;
}