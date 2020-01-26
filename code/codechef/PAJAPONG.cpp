#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long x, y, k;
        cin >> x >> y >> k;
        x += y;
        y = x/k;
        if(y&1) cout << "Paja\n";
        else cout << "Chef\n";
    }
	return 0;
}

