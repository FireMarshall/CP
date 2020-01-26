#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    int t, k ,x, y, n, c, p;
    cin >> t;
    while(t--){
        bool found = false;
        cin >> x >> y >> k >> n;
        x -= y;
        for(int i = 0; i < n; ++i){
            cin >> p >> c;
            if(found == false && c <= k && p >= x) found = true;
        }
        if(found) cout << "LuckyChef\n";
        else cout << "UnluckyChef\n";
    }
	return 0;
}

