//yet another palindrome problem
//problem: http://codeforces.com/problemset/problem/1324/B

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

		string ans = "NO";
		int f = 0;  
		for(int i=0; i<n; ++i) {
			if(f)
				break;

			for(int j=i+2; j<n; ++j) {
				if(a[i] == a[j]) {
					ans = "YES";
					f = 1;
					break;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}