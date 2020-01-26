#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        long long r = 0;
        for(int i = 0; i < n ; ++i) r += (s[i]-48);
        r = (r*(r+1))/2;
        cout << r << "\n";
    }
	return 0;
}

