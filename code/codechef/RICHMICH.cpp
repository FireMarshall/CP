#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin >> t;
	while(t--){
	    long long a,b;
	    cin >> a >> b;
	    if(b == 0 || a == 0) cout << "cannot distribute\n";
	    else if(b > a) cout << "cannot distribute\n";
	    else cout << (long long) a/b << "\n";
	}
	return 0;
}

