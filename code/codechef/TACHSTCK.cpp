#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n, d;
    cin >> n >> d;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a+n);
    long ans = 0;
    for(int i = 1; i < n; i+=2){
        if(a[i] - a[i-1] <= d) ++ans;
        else --i;
    }
    cout << ans << "\n";
	return 0;
}

