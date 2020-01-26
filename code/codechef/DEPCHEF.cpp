#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n),d(n);
		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 0; i < n; ++i) cin >> d[i];
		int idx = -1,m =-1;
		if( d[0] > (a[1]+a[n-1]) && m < d[0] )
			m = d[0],idx=0;
		for(int i = 1; i < n-1; ++i)
		    if(d[i] > (a[i-1] + a[i+1]) && m < d[i]) m=d[i],idx=i;
		if(d[n-1] > (a[n-2] + a[0])  && m < d[n-1])
		            m=d[n-1],idx=n-1;
		cout <<( idx != -1 ? d[idx] : -1 ) << endl;
	}
}
