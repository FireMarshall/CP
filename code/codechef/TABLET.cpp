#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n,b;
        cin >> n >> b;
        vector<ll> list;
        ll maxnum = INT_MIN;
        while(n--){
            ll w,h,p;
            cin >> w >> h >> p;
            if(p <= b && maxnum<(w*h)){ 
                list.push_back(w*h);
                maxnum = w*h;
            }                
        }
        if(list.size() == 0) cout <<"no tablet"<<endl;
        else cout << maxnum<<endl;
    }
    return 0;
}
