#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int sum = 0;
        for(char e : s) sum += e-'0';
        int r = 10 - (sum%10);
        if(r == 10) r = 0;
        cout << s;
        cout << r << "\n";
    }
	return 0;
}

