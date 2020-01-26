#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7; 

long long fast_expo(long long base, long long expo){
    long long res = 1;
    while(expo){
        if((expo&1)) res = (res * base)%mod;
        base = (base*base)%mod;
        expo >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    long long t, k;
    cin >> t;
    while(t--){
        cin >> k;
        long long res = fast_expo(2, k-1);
        cout << ((long long)10*res)%mod << "\n";
    }
    
	return 0;
}

