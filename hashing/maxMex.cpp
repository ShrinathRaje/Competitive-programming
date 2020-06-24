//max mex
//problem: https://www.codechef.com/COOK119B/problems/MAXMEX

#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;

		int c = 0;
		int h[m] = {0};
		for(int i=0; i<n; ++i) {
			int x;
			cin >> x;

			if(x > m)
				++c;

			if(x < m)
				++h[x];
		}
		
		int cc = 0;
		for(int i=1; i<m; ++i) {
			if(h[i]) {
				c += h[i];
				++cc;
			}
			else
				break;
		}

		if(cc == m-1)
			cout << c << "\n";
		else
			cout << -1 << "\n";
	}
	
	return 0;
}