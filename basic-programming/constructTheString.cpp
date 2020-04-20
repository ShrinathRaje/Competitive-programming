//construct the string
//problem: http://codeforces.com/problemset/problem/1335/B


#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n, a, b;
		cin >> n >> a >> b;

		for(int i=0; i<n; ++i) {
			cout << (char) (i % b + 97);
		}

		cout << endl;
	}

	return 0;
}