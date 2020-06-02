//smart phone
//problem: https://www.codechef.com/LRNDSA01/problems/ZCO14003

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	int n;
	cin >> n;
	
	vector<ll> v, p;
	for(int i=0; i<n; ++i) {
		ll x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	for(int i=0; i<n; ++i) {
		p.push_back(v[i] * (n - i));
	}

	cout << *max_element(p.begin(), p.end()) << endl;

	return 0;
}