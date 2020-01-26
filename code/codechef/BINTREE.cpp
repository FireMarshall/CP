#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    long long n, a, b, res;
    cin >> n;
    while(n--){
        cin >> a >> b;
        res = 0;
        while(a != b){
            if(a < b) swap(a, b);
            ++res;
            a = (a%2 == 0? a/2 : (a-1)/2);
        }
        cout << res << "\n";
    }
	return 0;
}

