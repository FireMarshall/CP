#include <bits/stdc++.h>
using namespace std;

map<int, int> m;
long long fn(int b){
    if(b < 4 ) return 0;
    if(m[b] == 0) m[b] = 1 + fn(b-2);
    return m[b];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int b;
        cin >> b;
        long long r = fn(b);
        cout << (r*(r+1))/2 << "\n";
    }
	return 0;
}

