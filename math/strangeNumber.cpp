//strange number
//problem: https://www.codechef.com/APRIL20B/problems/STRNO

#include <bits/stdc++.h>

using namespace std;

int cntFactors(long x) {
	int c = 0;
	while(x % 2 == 0) {
		++c;
		x /= 2;
	}

	for(int i=3; i<=sqrt(x); i+=2) {
		while(x % i == 0) {
			++c;
			x /= i;
		}
	}

	if(x > 1)
		++c;

	return c;
}

int main() {
	int t;
	cin >> t;

	while(t--) {
		long x, k;
		cin >> x >> k;

		if(cntFactors(x) >= k)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}

	return 0;
}