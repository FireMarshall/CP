#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    int t, n, a[100010];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n-1; ++i){
            if(i%2 == 1){
                if(a[i] < a[i+1]) swap(a[i], a[i+1]);
            } else {
                if(a[i] > a[i+1]) swap(a[i], a[i+1]);
            }
            cout << a[i] << " ";
        }
        cout << a[n-1] << "\n";
    }
	return 0;
}

