#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ++n;
        ll c[n], h[n], d[n+1] = {0};
        c[0] = h[0] = 0;
        for(int i = 1; i < n; ++i) cin >> c[i];
        for(int i = 1; i < n; ++i) cin >> h[i];
        sort(h+1, h+n);
        for(int i = 1; i < n; ++i){
            int l = i-c[i];
            int r = i+c[i];
            if(l < 1) l = 1;
            if(r > n-1) r = n-1;
            --d[r+1];
            ++d[l];
        }
        c[1] = d[1];
        for(int i = 2; i < n; ++i) c[i] = d[i] + c[i-1];
        sort(c+1, c+n);
        bool flag = true;
        for(int i = 1; i < n; ++i){
            if(c[i] == h[i]) continue;
            flag = false;
            break;
        }
        if(flag){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
	return 0;
}

