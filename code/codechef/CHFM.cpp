#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        long long sum = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            sum += a[i];
        }
        int ans = -1;
        for(int i = 0; i < n; ++i){
            if(sum == (n*a[i])){
                ans = i+1;
                break;
            }
        }
        if(ans != -1){
            cout << (ans) << "\n";
        } else {
            cout << "Impossible\n";
        }
    }
	return 0;
}

