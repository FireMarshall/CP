#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        int ap = count(s.begin(), s.end(), 'P');
        float r = ((float)ap/n)*100;
        for (int i = 2; i < n-2; ++i) {
            if(r >= 75) break;
            if(s[i] == 'A'){
                // fprintf(stderr, "(%d, %c)\n", i, s[i]);
                if((s[i-1] == 'P' || s[i-2] == 'P') &&  (s[i+1] == 'P' || s[i+2] == 'P')){
                    ++ap;
                    ++ans;
                }
            }
            r = ((float)ap/n)*100;
        }
        cout << (r < 75 ? -1: ans) << "\n"; 
    }
    
	return 0;
}

