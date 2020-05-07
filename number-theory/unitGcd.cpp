//unit gcd
//problem: https://www.codechef.com/APRIL20B/problems/UNITGCD

#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;

		int a = n/2;
		if(n%2 == 0) {
			cout << a << "\n";
			int j = 0;
			for(int i=0; i<a; ++i) {
				cout << 2 << " " << ++j << " " << ++j << "\n";
			}
		} else {
			if(n == 1) {
				cout << 1 << "\n";
				cout << 1 << " " << 1 << "\n";
				continue;
			}

			cout << a << "\n";
			cout << 3 << " " << 1 << " " << 2 << " " << n << "\n";

			int j = 2;
			for(int i=0; i<a-1; ++i)
				cout << 2 << " " << ++j << " " << ++j << "\n";
		}
	}
	return 0;
}