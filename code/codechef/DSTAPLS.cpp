#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n, k, p, q, r, x, y, z;
        cin >> n >> k;
        z = n / k;
        if(z == k){
            cout << "NO\n";
        } else if(k > z){
            cout << "YES\n";
        } else {
            if(z%k == 0){
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }
	return 0;
}

