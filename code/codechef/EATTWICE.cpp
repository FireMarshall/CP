#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<pair<int, int> > v(n, pair<int, int>());
        for(int i = 0; i < n; ++i) cin >> v[i].second >> v[i].first;
        sort(v.rbegin(), v.rend());
        int ans = v[0].first;
        int d = v[0].second;
        int i = 1;
        while((i < n) and (v[i].second == d)) ++i;
        ans += v[i].first;
        cout << ans << "\n";
    }
	return 0;
}

