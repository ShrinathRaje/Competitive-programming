//multiple of 3
//problem: https://www.codechef.com/LRNDSA01/problems/MULTHREE

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	// ios_base::sync_with_stdio(false);
 	// cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
    	ll k, a, b;

    	cin >> k >> a >> b;
    	ll s = a + b;
    	ll cs = (2*s)%10 + (4*s)%10 + (8*s)%10 + (6*s)%10;
    	ll nc = (k-3)/4;
    	ll sd = s + s%10 + nc*cs;
    	ll lf = (k-3)%4;

    	if(lf == 1)
    		sd += (2*s)%10;
    	else if(lf == 2)
    		sd += ((2*s)%10 + (4*s)%10);
    	else if(lf == 3)
    		sd += ((2*s)%10 + (4*s)%10 + (8*s)%10);

    	if(sd % 3)
    		cout << "NO" << "\n";
    	else
    		cout << "YES" << "\n";
    } 

	return 0;
}