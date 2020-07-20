//july cook off - Eventual-Reduction
//problem: https://www.codechef.com/COOK120B/problems/EVENTUAL

#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		// if(n % 2)
		// 	cout << "NO\n";
		// else {
		// 	int a[26] = {0};

		// 	for(int i=0; i < s.length(); ++i) {
		// 		++a[s[i] - 'a'];
		// 	}

		// 	int f = 1;
		// 	for(int i=0; i<26; ++i) {
		// 		if(a[i] % 2) {
		// 			f = 0;
		// 			break;
		// 		}
		// 	}

		// 	if(f)
		// 		cout << "YES\n";
		// 	else
		// 		cout << "NO\n";
		// }

		int mask = 0;
		for(int i=0; i<s.length(); ++i) {
			mask ^= (1 << (s[i] - 'a'));
		}

		if(mask)
			cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;
}