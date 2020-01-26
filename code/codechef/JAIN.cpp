#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin >> t;
	while(t--){
		long long n,c = 0;
		cin >> n;
		long long m[32];
		for(int i = 0;i < 32; ++i) m[i] = 0;
  		for(long long i = 0 ; i < n; ++i){
			int x = 0;
			string s;
			cin >> s;
			for(long long j = 0 ; j < s.length() && x != 31; ++j){
				switch(s[j]){
					case 'a' : x |= 1;
						break;
					case 'e' : x |= 2;
						break;
					case 'i' : x |= 4;
						break;
					case 'o' : x |= 8;
						break;
					case 'u' : x |= 16;
						break;
				}
			}
			m[x]++;
		}
		for(int i = 1; i < 31; ++i){
			for(int j = 1; j < 31; ++j){
				if( (i | j) == 31){
					c += m[i]*m[j];
				}
			}
		}
		c >>= 1;
		c += (n-m[31])*m[31];
		c += (m[31]*(m[31]-1))/2;
		cout << c <<"\n";
	}
	return 0;
}

