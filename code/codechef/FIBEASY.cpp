#include <bits/stdc++.h>
using namespace std;

pair<int, int> fib(long long n){
    if(n <= 0)
        return make_pair(0, 1);
    pair<int, int> p = fib(n >> 1);
    int a = p.first, b = p.second;
    int c = (a * ( 2 * b - a))%10;
    int d = (a*a + b*b)%10;
    if(n&1 == 1){
        return make_pair(d, (c+d)%10);
    }
    return make_pair(c, d);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long h = log2l(n);
        h = 1LL << h;
        pair<int, int> ans = fib(h-1);
        cout << ((ans.first)%10) << "\n";
    }
	return 0;
}
