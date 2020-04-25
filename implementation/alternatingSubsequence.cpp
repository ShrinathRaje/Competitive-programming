//alternating subsequence
//problem: https://codeforces.com/problemset/problem/1343/C

#include <bits/stdc++.h>

using namespace std;

int sgn(int x) {
	return (x > 0) ? 1 : -1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);

		for(auto &it : a) {
			cin >> it;
		}

		long long sum = 0;
		for(int i=0; i<n; ++i) {
			int e = a[i];
			int j=i;
			while(j<n && sgn(a[i]) == sgn(a[j])) {
				e = max(e, a[j]);
				++j;
			}

			sum += e;
			i = j-1;
		}

		cout << sum << "\n";
	}

	return 0;
}