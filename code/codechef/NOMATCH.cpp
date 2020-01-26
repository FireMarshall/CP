#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,n;
	cin >> t;
	while(t--){
	    cin >> n;
	    vector<int> v(n);
	    for(int i =0 ;i < n; ++i) cin >> v[i];
	    sort(v.rbegin(),v.rend());
        long long res = 0;
	    for(int i =0; i < n/2; ++i)
	        res += abs(v[i] - v[n-i-1]);
	    cout << res << "\n";
	}
	return 0;
}

