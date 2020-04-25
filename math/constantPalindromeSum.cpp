//constant sum palindrome
//problem: https://codeforces.com/problemset/problem/1343/D

#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; ++i) {
			cin >> a[i];
		}

		map<int, int> mp;
		int pf[2*k + 2] = {0};

		for(int i=0; i<n/2; ++i) {
			int f = min(a[i], a[n-1-i]);
			int s = max(a[i], a[n-1-i]);

			++mp[f+s];
			pf[f + 1] += 1;
			pf[s + k + 1] -= 1;
		}

		int sum = 0;
		for(int i=0; i<(2*k + 2); ++i) {
			sum += pf[i];
			pf[i] = sum;
		}

		int m = n;
		for(int i=2; i<=2*k; ++i) {
			int cnt0 = mp[i];
			int cnt1 = pf[i] - cnt0;
			int cnt2 = n/2 - cnt1 - cnt0;

			int mn = cnt1 + cnt2*2;
			m = min(m, mn);
		}

		cout << m << "\n";
	}
	return 0;
}