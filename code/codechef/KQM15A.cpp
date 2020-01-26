#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    int r, c;
    cin >> r >> c;
    int sr, sc, dr, dc, x;
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            cin >> x;
            if(x == 1){
                sr = i;
                sc = j;
            } else if (x == 2){
                dr = i;
                dc = j;
            }
        }
    }
    cout << (abs(dc-sc)+abs(sr-dr)) << "\n";
	return 0;
}

