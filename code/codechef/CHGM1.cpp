#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int> v){
    int  m = 0 ,t = 0;
    for(int i = 0 ; i < v.size(); ++i){
        t = t + v[i];
        if( t < 0 ) t =0;
        else if( m < t ) m = t;
    }
    return (m == 0) ? [=](){ int x = INT_MIN; for(auto a : v) x = max(x,a); return x; }() : m;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for(int i = 0;i < n; ++i) cin >> v[i];
	    cout << kadane(v) << "\n";
	}
	return 0;
}

