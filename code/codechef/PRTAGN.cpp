#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    bool a[100010];
    int t;
    cin >> t;
    while(t--){
        int q;
        cin >> q;
        unordered_set<int> curr, next;
        int evens = 0, odds = 0;
        while(q--){
            int x;
            cin >> x;
            // next.clear();
            if(curr.find(x) == curr.end()){
                for(auto &y : curr) next.insert(y);
                for(auto &y : next){
                    int z = y ^ x;
                    curr.insert(z);
                    if((__builtin_popcount(z)&1) == 1) ++odds;
                    else ++evens;
                }
                if((__builtin_popcount(x)&1) == 1) ++odds;
                else ++evens;
                curr.insert(x);
            }
            cout << evens << " " << odds << "\n";
        }
    }
	return 0;
}

