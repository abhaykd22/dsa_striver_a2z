#include <iostream>
#define ll long long 

using namespace std;

ll compute_gcd(ll a, ll b){
	if(b == 0) return a;
	return compute_gcd(b, a % b);
}

int main(){
	ll a, b;
	cin >> a >> b;
	if(a == 0 || b == 0){
		cout << 0 << endl;
		return 0;
	}
	cout << compute_gcd(a, b) << endl;
	return 0;
}
