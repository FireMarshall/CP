#include <bits/stdc++.h>
using namespace std;

int t, tp;
long long n, q, l, r, x, s;
unordered_map<long long, long long> m;

long long qy(long long p){
    if(m.find(p) == m.end()) return p;
    else m[p] = qy(m[p]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> q;
        s = 0;
        m.clear();
        while(q--){
            cin >> tp;
            if(tp == 1){
                cin >> x;
                x += s;
                m[x] = x-1;
            } else {
                cin >> l >> r;
                l += s;
                r += s;
                x = qy(r);
                if(x < l){
                    cout << "0\n";
                } else {
                    cout << x << "\n";
                    s = (s%n+x%n)%n;
                }
            }
        }
    }
	return 0;
}

