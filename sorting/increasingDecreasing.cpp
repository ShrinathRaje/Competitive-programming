//problem: https://www.codechef.com/LTIME85B/problems/INCRDEC

#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		int a[n];

		int fq[200001] = {0};
		int f = 0;

		for(int i=0; i<n; ++i) {
			int n;
			cin >> n;
			++fq[n];
			if(fq[n] > 2)
				f = 1;
		}

		if(f)
			cout << "NO\n";
		else {
			int x[200001] = {0}, y[200001] = {0};

			int j = 0, k = 0;
			for(int i=0; i<200001; ++i) {
				if(fq[i] == 2) {
					x[j++] = i;
					--fq[i];
				}

				if(fq[i] == 1) {
					y[k++] = i;
					--fq[i];
				}
			}

			sort(x, x + j);
			sort(y, y + k, greater<int>());

			if(x[j-1] == y[0])
				cout << "NO\n";
			else {
				cout << "YES\n";

				for(int i=0; i<j; ++i)
					cout << x[i] << " ";

				for(int i=0; i<k; ++i)
					cout << y[i] << " ";

				cout << "\n";
			}
		}
	}
	return 0;
}