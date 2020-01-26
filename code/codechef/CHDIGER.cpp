#include<bits/stdc++.h>
using namespace std;

bool check(string n,char d,int p){
	for(int i = p; i < n.length(); ++i){
		if(n[i] < d) return true;
	}
	return false;
}
int main(){
	long long t;
	cin >> t;
	while(t--){
		string n;
		char d;
		cin >> n >> d;
		int l = n.length();
		int x = 0;
		for(int i = 0;i < l; ++i){
			if( n[i] >= d || check(n,n[i],i+1) ){
				n[i] = 'a';
				++x;
			}
		}
		for(int i = 0 ; i < l; ++i)
			if(n[i] != 'a') cout << n[i];
		string p(x,d);
		cout << p <<"\n";
	}
	return 0;
}
