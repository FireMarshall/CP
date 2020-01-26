#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t, n, d[1005][1005];
    string m[1005];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; ++i) cin >> m[i];
        memset(d, 0, sizeof d);
        for(int i = 0; i < n; ++i){
            for(int j = n-1; j >= 0; --j){
                if(m[i][j] == '.') d[i][j] = 1;
                else break;
            }
        }
        int ans = 0;
        for(int j = 0; j < n; ++j){
            for(int i = n-1; i >= 0; --i){
                if(m[i][j] == '.'){
                    if(d[i][j] == 1){
                        ++ans;
                    }
                } else {
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
	return 0;
}

