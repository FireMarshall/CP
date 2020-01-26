#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a,a+n);
    int m = a[n-1];
    int res = 0;
    for(int i = 0; i < n-1; ++i){
        res = max({res, m % a[i], a[i] % m});
    }
    cout << res << "\n";
    return 0;
}
