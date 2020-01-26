#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;

int pow(int base, int expo, int mod) {
    long long res = 1;
    while(expo){
        if(expo % 2) 
            res = (1LL * res * base)%mod;
        base = (1LL * base * base)%mod;
        expo /= 2;
    }
    return res;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k, m;
        cin >> n >> k >> m;
        int num = pow(n-1, (m+1)/2, mod);
        int de = pow(n, (m+1)/2, mod);
        if (m%2 == 0) {
            num = (1LL * num * (n+k-1)) % mod;
            de = (1LL * de * (n+k)) % mod;
        }
        num = (mod + de - num)%mod;
        int ans = (1LL * num * pow(de, mod-2, mod)) % mod;
        cout << ans << "\n";
    }
	return 0;
}

