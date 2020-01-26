#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n,x;
    cin >> n;
    long long c[32] = {0};
    for(int i = 0; i < n; ++i){
        cin >> x;
        for(int j = 0; ((j < 32) and (x > 0)); ++j, x >>= 1)
            c[j] += x&1;
    }
    long long ans = 0;
    for(int i = 0; i < 32; ++i)
        ans += c[i]*(c[i]-1)*(1<<i)>>1;
    cout << ans << "\n";
	return 0;
}

