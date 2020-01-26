#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for(int i = 0; i < n; ++i) cin >> v[i];
	    sort(v.begin(),v.end());
	    int c = 0;
	    for(int i = 0; i < n; ++i) c += (v[i] <= c) ? 1 : 0;
	    cout << c <<endl;
	}
	
	return 0;
}

