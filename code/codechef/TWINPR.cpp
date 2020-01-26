#include <bits/stdc++.h>
using namespace std;

bool isp(int x){
    if(x < 2) return false;
    if(x == 2) return true;
    for(int i = 3; i*i <= x; ++i){
        if(x%i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int a[100010];
    for(int i = 0; i < 100005; ++i) a[i] = (isp(i)? 1 : 0);
    int t, n, res;
    cin >> t;
    while(t--){
        cin >> n;
        res = 0;
        if(a[n] && a[n-2]) ++res;
        if(a[n] && a[n+2]) ++res;
        cout << res << "\n";
    }
	return 0;
}

