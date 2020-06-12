// the tom and jerry game
// problem: https://www.codechef.com/JUNE20B/problems/EOEO

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
	//ios_base::sync_with_stdio(false);
 	//cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
    	ll ts;
    	cin >> ts;

    	if(ts % 2)
    		cout << ts / 2 << "\n";
    	else {
    		while(ts % 2 == 0)
    			ts /= 2;

    		cout << ts/2 << "\n";
    	}
    } 

	return 0;
}