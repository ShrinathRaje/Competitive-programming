//even matrix
//problem: https://www.codechef.com/JUNE20B/problems/EVENM

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		if(n % 2) {
			int c = 1;
			for(int i=0; i<n; ++i) {
				for(int j=0; j<n; ++j)
					cout << c++ << " ";

				cout << "\n";
			}
		} else {
			for(int i=0; i<n; ++i) {
				if(i % 2) {
					int c = (i+1)*n;
					for(int j=0; j<n; ++j)
						cout << c-- << " ";
				} else {
					int c = i*n + 1;
					for(int j=0; j<n; ++j)
						cout << c++ << " ";
				}

				cout << "\n";
				
			}
		}

		cout << "\n";
	}

	return 0;
}