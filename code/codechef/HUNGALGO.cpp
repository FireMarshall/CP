#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t, n, a[505][505];
    cin >> t;
    while(t--){
        cin >> n;
        vector<bool> rowv(n,false), colv(n,false);
        bool row,col;
        for(int i = 0; i < n; ++i){
            row = false;
            for(int j = 0; j < n; ++j){
                cin >> a[i][j];
                if(!row && a[i][j] == 0)
                    row = true;
            }
            rowv[i] = row;
        }
        for(int i = 0; i < n; ++i){
            col = false;
            for(int j = 0; j < n; ++j){
                if(!col && a[j][i] == 0){
                    col = true;
                    break;
                }
            }
            colv[i] = col;
        }
        bool res = true;
        for(int i = 0; i < n; ++i){
            if(!(rowv[i] && colv[i])){
                res = false;
                break;
            }
        }
        if(res)
            cout << "YES\n";
        else
            cout << "NO\n";
	}
	return 0;
}
