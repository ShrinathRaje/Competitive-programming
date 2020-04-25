//k'th beautiful string
//problem: https://codeforces.com/problemset/problem/1328/B

#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,k;
		cin >> n >> k;
		string s(n, 'a');

		for(int p=1, h=1; ;p += h++) {
			if(k < p+h) {
				s[n-h-1] = 'b';
				s[n-k+p-1] = 'b';
				break;
			}
		}

		cout << s << endl;
	}
	return 0;
}