#include <bits/stdc++.h>
using namespace std;

long long res[1000005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	long long mod = 1000000007LL;
	res[0] = 0;
	res[1] = 1;
    for(int i = 1; i < 1000002; ++i){ 
        res[i] = (((res[i-1]*i)%mod + (res[i-1] + i)%mod))%mod;
    }
    
	long long t, ans, n;
	cin >> t;
	while(t--){
	    cin >> n;
	    cout << res[n] << "\n";
	}
	
	return 0;
}

