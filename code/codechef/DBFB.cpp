#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> m >> n;
        long long s1 = 0LL, s2 = 0LL, x;
        for(int i = 0; i < m; ++i) {
            cin >> x;
            s1 = (s1+x)%mod;
        }
        for(int i = 0; i < m; ++i) {
            cin >> x;
            s2 = (s2+x)%mod;
        }
        long long f = (s1*m)%mod, s = (s2*m)%mod;
        if(n == 1){
            cout << s2 << "\n";
        } else {
            n -= 2;
            long long r = 0;
            while(n--){
                r = (f + s)%mod;
                f = s;
                s = r;
            }
            cout << s << "\n";
        }
    }
	return 0;
}

