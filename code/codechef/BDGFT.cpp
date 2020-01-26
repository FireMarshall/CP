#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int zeros[n+1], ones[n+1];
        zeros[0] = ones[0] = 0;
        int oc = 0, zc = 0;
        for(int i = 0; i < n; ++i){
            if(s[i] == '1'){
            	++oc;
            } else{
            	++zc;
            }
	        ones[i+1] = oc;
            zeros[i+1] = zc;
        }
        int ans = 0;
        for(int i = 1; i < 317; i++){ 
            int window = i + i*i;
            for(int j = 0; j+window <= n; ++j){
            	int r = j+window;
                int os = ones[r] - ones[j];
                int zs = zeros[r] - zeros[j];
                if(zs == (os*os)){
                    ++ans;
                }
            }
        }
        cout << ans << "\n";
    }
	return 0;
}

