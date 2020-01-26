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
        string a, b;
        cin >> a;
        cin >> b;
        int ans = 0;
        for(int  i =0 ; i < n; ++i){
            if(a[i] == b[i]){
                ++ans;
            } else if (b[i] == 'N'){
                continue;
            } else {
                ++i;
            }
        }
        cout << ans << "\n";
    }
	return 0;
}

