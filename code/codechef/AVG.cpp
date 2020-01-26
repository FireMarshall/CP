#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
	ll t;
	cin >> t;
	while(t--){
	    ll n,k,v,s = 0,x;
	    cin >> n >> k >> v;
	    
	    vector<ll> a(n);
	    for(ll i = 0; i < n; ++i){
	        cin >> a[i];
	        s += a[i];
	    }
	    ll r = (v*(n+k)) - s;
	    ll z = r/k;
	    bool f = true;
	    if(r <= 0 || r % k != 0 )
	        cout << -1 << endl;
	    else {
	        for(ll i = 0 ;i < n; ++i) {
	            if(a[i] == z) {
	                f = false;
	                cout << -1 << endl;
    	            break;
    	        }
	        }
	        if(f) cout << (ll)z << endl;
        }
	}
	return 0;
}
