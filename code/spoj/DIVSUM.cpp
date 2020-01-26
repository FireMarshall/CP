#include<bits/stdc++.h>
using namespace std;

int 
main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		int ans = 0;
		for(int i = 1; i <= (int)sqrt(n); ++i){
			if(n % i == 0){
				ans += i;
				ans += n/i;
			}
		}
		ans -= n;
		cout << ans << "\n";
	}
	return 0;
}
