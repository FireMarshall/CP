#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[n];
        long long sum = 0, m = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a+n);
        if(k > n/2) k = n-k;
        for(int i = 0; i < k; ++i) m += a[i];
        cout << abs((sum - 2*m)) << "\n";
    }
	return 0;
}

