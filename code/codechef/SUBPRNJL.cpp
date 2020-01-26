#include <bits/stdc++.h>
using namespace std;

long long  readLL(){
	long long result = 0LL;
	register char ch;
	ch = getchar();
	while (true) {
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long t,f,x;
	t = readLL();
	x = t;
    vector<long long> m;
    vector<long> b;
	vector<long long> v;
	while(t--){
	    long long n,k,mm,z;
		n = readLL();
		k = readLL();
	    v.clear();
        v.resize(n);
		for(long long i = 0LL; i < n; ++i) 
			v[i] = readLL();
	    long long c = 0LL;

		for(long long i = 0LL; i < n; ++i){
		    m.assign(2002,0);
		    b.clear();
			for(long long j = i; j < n; ++j){
			    m[v[j]]++;
			    b.insert(lower_bound(b.begin(),b.end(),v[j]),v[j]);
			    mm = ceil((double)k/(j-i+1));
			 //   mm = (long long)((k + j - i)/(j - i + 1)) ;
			    z = ceil((double)k/mm);
			 //   z = (long long)((k + mm - 1)/mm);
			    if(m[m[b[z-1]]] != 0) c++;
			}
		}
		cout << c << '\n';
	}
	return 0;
}
