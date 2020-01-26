#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    vector<char> vo = {'a', 'e', 'i', 'o', 'u'}; 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long res = 0;
        for(int i = 1; i < n; ++i){
            if(count(vo.begin(), vo.end(), s[i]) == 1){
                if(count(vo.begin(), vo.end(), s[i-1]) == 0){
                    ++res;
                }
            }
        }
        cout << res << "\n";
    }
	return 0;
}
