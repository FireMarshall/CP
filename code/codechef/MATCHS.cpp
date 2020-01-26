#include <bits/stdc++.h>
using namespace std;

bool fn(long long a, long long b){
    bool p = false;
    while(a != 0 and b != 0){
        if(a < b) swap(a, b);
        if(a%b == 0){
            p = !p;
            break;
        }
        if(a/b >= 2){
            p = !p;
            return p;
        }else{ 
            a -= b;
            p = !p;
        }
    }
    return p;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    long long t, a, b, x, y;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << (fn(a,b)? "Ari\n" : "Rich\n");
    }
	return 0;
}

