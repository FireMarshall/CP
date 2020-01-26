#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long> a(n);
        int m ,p = -1;
        for(int i = 0; i <n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        long long c = 0;
        a.erase(unique(a.begin(), a.end()), a.end());
        n = a.size();
        if(n == 1){
            cout << (a[0]<<1) << "\n";
            continue;
        }
        int j = n-3;
        if(j >= 0) c = a[j--];
        while(j >= 0) c = __gcd(c, a[j--]);
        if(c == 0) 
            cout << (a[n-1]+a[n-2]) << "\n";
        else
            cout << (max(__gcd(c, a[n-2])+a[n-1], __gcd(c, a[n-1])+a[n-2])) << "\n";
        // }
    }
	return 0;
}

