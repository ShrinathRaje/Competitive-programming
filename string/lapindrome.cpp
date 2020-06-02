//lapindrome
//problem: https://www.codechef.com/LRNDSA01/problems/LAPIN

#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;

		int h[26] = {0};
		int l = s.length();

		for(int i=0, j=l-1; i < j; ++i, --j) {
			++h[s[i] - 'a'];
			--h[s[j] - 'a'];
		}

		bool f = 1;
		for(int i=0; i<26; ++i) {
			if(h[i] != 0) {
				f = 0;
				break;
			}
		}

		if(f)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}