#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--){
        long long n, zc = 0, lc = 0, sc = 0, x;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            cin >> x;
            if(x > 0)
                ++lc;
            else
                ++sc;
        }
        if(lc == 0) cout << sc << " " << sc <<endl;
        else if(sc == 0) cout << lc << " "<< lc <<endl;
        else if(lc > sc) cout << lc << " "<< sc << endl;
        else if(sc > lc) cout << sc << " "<< lc << endl;
        else cout << lc << " " << sc <<endl;
    }
	return 0;
}

