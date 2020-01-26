#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int p, ans = 0, d = (1 << 11);
        cin >> p;
        while(p){
            while(p < d && d > 1) d >>= 1; 
            ans += p/d;
            p &= (d-1);
            d >>= 1;
        }
        cout << ans << "\n";
    }
	return 0;
}

