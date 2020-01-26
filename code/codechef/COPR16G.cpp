#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if(__gcd(a, b) > 1)  cout << "-1\n";
        else cout << ((a * b) -a -b +1) << "\n";
    }
	return 0;
}

