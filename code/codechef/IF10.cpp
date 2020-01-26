#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin >> t;
	while(t--){
	    ll n,c = 0;
	    cin >>n;
	    ll h = n/2;
	    for(ll i = 0; i < n; ++i){
	        ll x;
	        cin >> x;
	        c += x >= h ? 1 : 0;
	    }
	    cout << c << endl;
	}
	return 0;
}

