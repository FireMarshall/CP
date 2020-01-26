#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, x, t;
    cin >> t;
    while(t--){
        cin >> n >> x;
        string s;
        cin >> s; 
        set<long long> v;
        v.insert(x);
        for(int i = 0 ; i < n; ++i){
            x += (s[i] == 'R') ? 1 : -1;
            v.insert(x);
        }
        cout << v.size() << "\n";
    }
	return 0;
}

