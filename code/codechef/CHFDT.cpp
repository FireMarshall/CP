#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, l;
    cin >> n >> l;
    string c;
    cin >> c;
    vector<string> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];
    int m = INT_MAX, ans = -1;
    for(int i = 0; i < n; ++i){
        int cnt = 0;
        for(int j = 0; j < c.length(); ++j){
            if(c[j] != v[i][j]) ++cnt;
        }
        if(cnt < m){
            ans = i;
            m = cnt;
        } 
    }
    cout << v[ans] << "\n";
	return 0;
}

