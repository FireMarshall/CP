#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
	int ma[1001][1001], fe[1001][1001], q, m, n, i, j, k;
	cin >> n >> m >> q;

	int mm = 0,ff = 0;
	for(i = 0; i < n; ++i){
	    string s;
	    cin >> s;
	    for(j = 0; j < m; ++j){
	        if(s[j] == 'M') {
	            ma[i][j] = 1;
	            fe[i][j] = 0;
	        }
	        else {
	            fe[i][j] = 1;
	            ma[i][j] = 0;
	        }
	    }
	}
	for(i = 1; i < n; ++i){
	    for(j = 1; j < m; ++j){
	        if(ma[i][j] != 0) {
	            ma[i][j] += min({ ma[i-1][j], ma[i-1][j-1], ma[i][j-1] });
                mm = max(mm, ma[i][j]);
	        } else ma[i][j]=0;
            if(fe[i][j] != 0) {
	            fe[i][j] += min({ fe[i-1][j], fe[i-1][j-1], fe[i][j-1] });
                ff = max(ff, fe[i][j]);
	        } else fe[i][j]=0;
	    }
	}
	char ch;
	while(q--){
	    cin >> k >> ch;
	    if(ch == 'M'){
	        if(mm >= k) cout << "yes" << "\n";
            else cout << "no" << "\n";
	    } else {
	        if(ff >= k) cout << "yes" << "\n";
	        else cout << "no" << "\n";
	    }
	}
	return 0;
}

