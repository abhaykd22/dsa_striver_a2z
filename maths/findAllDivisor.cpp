#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long 

using namespace std;

vector<int> findAllRemainder(int num){
	vector<int> ans;
	for(int i = 1; i*i<=num; i++){
		if(num%i == 0){
			ans.push_back(i);
			if(i*i != num){
				ans.push_back(num/i);
			}
		}
	}
	sort(ans.begin(), ans.end());
	return ans;
}

int main(){
	ll num;
	cin >> num;
	vector<int> ans = findAllRemainder(num);
	for(int i : ans){
		cout << i << " ";
	}
	return 0;
}
