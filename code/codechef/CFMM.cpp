#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[125];
        memset(a, 0, sizeof a);
        for(int i = 0; i < n; ++i){
            string s;
            cin >> s;
            for(int j = 0; j < s.length(); ++j) a[s[j]]++;
        }
        a['c'] >>= 1;
        a['e'] >>= 1;
        cout << min({a['c'], a['o'], a['d'], a['e'], a['h'], a['f']}) << "\n";
    }
	return 0;
}

