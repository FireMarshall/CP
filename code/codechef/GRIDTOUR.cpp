#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t, m, n, k;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        if(__gcd(n,k) == 1 and __gcd(m,k) == 1) cout << (long long) m*n << "\n";
        else cout << "-1\n";
    }
    
	return 0;
}

