#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    int t, n, a[26];
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        n = s.length();
        memset(a, 0, sizeof a);
        for(int i = 0; i < n; ++i) a[s[i]-'a']++;
        int odds = count_if(a, a+26, [](const int x){return x%2==1;});
        if(odds > 0 and odds < 4) cout << "DPS\n";
        else cout << "!DPS\n";
    }
	return 0;
}

