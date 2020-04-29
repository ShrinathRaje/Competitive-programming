//tetris problem
//problem: http://codeforces.com/problemset/problem/1324/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);

		for(auto &it : a)
			cin >> it;

		string ans = "YES";
		for(int i=1; i<n; ++i) {
			int d = abs(a[i] - a[i-1]);
			if(d % 2 == 1) {
				ans = "NO";
				break;
			}	
		}

		cout << ans << endl;
	}
	return 0;
}