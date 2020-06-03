//trailing zeros in factorial
//problem: https://www.codechef.com/LRNDSA01/problems/FCTRL

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int c = 0;
        for(int i=5; ; i *= 5) {
        	int a = n / i;
        	if(a == 0)
        		break;
        	else
        		c += a;
        }

        cout << c << endl;
    }
	return 0;
}