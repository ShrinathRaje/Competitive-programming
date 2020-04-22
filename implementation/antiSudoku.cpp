//anti sudoku
//problem: http://codeforces.com/problemset/problem/1335/D

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		for(int i=0; i<9; ++i) {
			char str[10];
			cin >> str;

			for(int j=0; j<10; ++j) {
				if(str[j] == '1')
					str[j] = '2';
			}

			cout << str << "\n";
		}
		
	}

	return 0;
}