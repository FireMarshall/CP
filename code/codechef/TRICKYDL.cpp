#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll a;
        cin >> a;
		ll  global_profit = 0,
			d1 = 0,
			d2 = 0;
		int i = 0;
		bool flag = true;
		while(true){
			ll 	local_profit = 0;
			local_profit = (a - (1LL << i));
			if((local_profit > 0) && flag) d1++;
			else flag = false;
			global_profit += local_profit;
			if((global_profit > 0)) d2++;
			else break;
			++i;
			if(i == 63) break;
		}
		cout << d2 <<" " << d1 <<endl;
    }
	return 0;
}
