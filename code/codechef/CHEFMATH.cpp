#include <bits/stdc++.h>
using namespace std;
vector<long long> f(43);
long long mod = 1e9+7, ans;

void fn(long long n, int k, int idx){
    if(n < 0 or idx < 0) return;
    if(f[idx]*k < n) return;
    if(k == 0){ 
        if(n == 0) ans = (ans+1)%mod;
        return;
    }
    fn(n-f[idx], k-1, idx);
    fn(n, k, idx-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    f[0] = 1;
    f[1] = 2;
    for(int i = 2; i < 43; ++i) f[i] = f[i-1]+f[i-2];
    
    int q;
    cin >> q;
    long long n, k;
    
    while(q--){
        cin >> n >> k;
        ans = 0LL;
        fn(n, k, 42);
        cout <<  ans << "\n";
    }
	return 0;
}

