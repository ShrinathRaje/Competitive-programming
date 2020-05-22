//chef and bitwise product
//problem: https://www.codechef.com/MAY20B/problems/CHANDF

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define noOfBits 40

ll f(ll x, ll y, ll z) {
	return (x & z) * (y & z);
}

int getBit(ll n, int p) {
	return (n & (1LL << (noOfBits - 1 -p))) != 0;
}

vector<ll> getZValues(ll x, ll y, ll l, ll r) {
	vector<ll> zValues = {l, r};

	int k = 0;
	while(k < noOfBits && getBit(l, k) == getBit(r, k))
		++k;

	for(int i=k+1; i<noOfBits; ++i) {
		if(getBit(l, i))
			continue;

		ll z = l;
		z = z | (1LL << (noOfBits-i-1));

		for(int j=i+1; j<noOfBits; ++j) {
			if(getBit(x, j) == 0 && getBit(y, j) == 0)
				z = z & (~(1LL << (noOfBits-j-1)));
			else
				z = z | (1LL << (noOfBits-j-1));
		}

		zValues.push_back(z);
	}

	for(int i=k+1; i<noOfBits; ++i) {
		if(!getBit(r, i))
			continue;

		ll z = r;
		z = z & (~(1LL << (noOfBits-i-1)));

		for(int j=i+1; j<noOfBits; ++j) {
			if(getBit(x, j) == 0 && getBit(y, j) == 0)
				z = z & (~(1LL << (noOfBits-j-1)));
			else
				z = z | (1LL << (noOfBits-j-1));
		}

		zValues.push_back(z);
	}

	sort(zValues.begin(), zValues.end());
	return zValues;

}

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    ll x, y, l, r;
	    cin >> x >> y >> l >> r;

	    vector<ll> zValues = getZValues(x, y, l, r);
	    ll max = -1, ans = r;
	    for(ll z : zValues) {
	    	ll curMax = f(x, y, z);
	    	if(curMax > max) {
	    		max = curMax;
	    		ans = z;
	    	}
	    }

	    cout << ans << endl;
	}
	return 0;
}