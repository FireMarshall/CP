#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        vector<int> ae, ao, be, bo;
        for(int i = 0; i < n; ++i){
            cin >> x;
            if(x & 1) ao.push_back(x);
            else ae.push_back(x);
        }
        for(int i = 0; i < n; ++i){
            cin >> x;
            if(x & 1) bo.push_back(x);
            else be.push_back(x);
        }
        
        long long ans = 0;
        
        int i = 0, j = 0;
        while((i < ao.size()) and (i < bo.size())){
            ans += (bo[i]+ao[i]) >> 1;
            ++i;
        }
        while((j < ae.size()) and (j < be.size())){
            ans += (be[j]+ae[j]) >> 1;
            ++j;
        }
        while((i < ao.size()) and (j < be.size())){
            ans += (ao[i]+be[j]) >> 1;
            ++i, ++j;
        }
        while((i < bo.size()) and (j < ae.size())){
            ans += (bo[i]+ae[j]) >> 1;
            ++i, ++j;
        }
        cout << ans << '\n';
    }
	return 0;
}

