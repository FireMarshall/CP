#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t, n, a[100010], d[100010];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            d[i] = 1;  
        } 
        for(int i = n-2; i >= 0; --i){
            if((a[i] >= 0 && a[i+1] < 0) || 
               (a[i] < 0 && a[i+1] >= 0)){
                d[i] = d[i+1] + 1;
            }
        }
        for(int i = 0; i < n; ++i) cout << d[i] << " ";
        cout << "\n";
    }
	return 0;
}

