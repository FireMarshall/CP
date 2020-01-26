#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int c[m], a[n], p[n], s[n];
        for(int i = 0; i < m; ++i) cin >> c[i];
        for(int i = 0; i < n; ++i) cin >> a[i] >> p[i] >> s[i];
        long long ans = 0LL;
        int v[n];
        for(int i = 0; i < n; ++i) v[i] = -1;
        for(int i = 0; i < n; ++i){
            if(c[a[i]-1] > 0){
                v[i] = a[i];
                --c[a[i]-1];
                ans += p[i];
            }
        }
        int em = 0;
        for(int i = 0; i < n; ++i){
            if(v[i] == -1){
                while(c[em] == 0) ++em;
                v[i] = em+1;
                --c[em];
                ans += s[i];
            }
        }
        cout << ans << "\n";
        for(int i = 0; i < n; ++i) cout << v[i] << " ";
        cout << "\n";
    }
	return 0;
}

