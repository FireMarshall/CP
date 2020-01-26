#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    int t, n, a[10005], ans, x;
    cin >> t;
    while(t--){
        cin >> n;
        ans = 0;
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = n-1; i > 0; --i) a[i] -= a[i-1];
        for(int i = 0; i < n; ++i) {
            cin >> x;
            ans += (a[i] >= x)? 1 : 0;
        }
        cout << ans << "\n";
    }
	return 0;
}

