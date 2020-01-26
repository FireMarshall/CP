#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int moves = 0, x;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            moves += x / i;
        }
        cout << ((moves & 1)? "ALICE\n" : "BOB\n"); 
    }
	return 0;
}

