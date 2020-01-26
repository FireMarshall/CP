#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k,a,b;
		cin>>n>>a>>b>>k;
		ll ap = (ll)n/a,
		   cp = (ll)n/b,
		   x = (ll)(a*b)/__gcd(a,b);
		x = (ll)n/x;
		x <<= 1;
		cout<<( ((ap + cp - x) >= k) ? "Win" : "Lose")<<endl;
	}
}
