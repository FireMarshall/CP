#include <bits/stdc++.h>
using namespace std;

int index(vector<int> a, int x){
	for(int i = a.size()-2; i > -1; --i){
		if(a[i] == x){
			return i;
		}
	}
	return -1;
}

int main() {
	vector<int> a = {0};
	for(int i = 1; i < 129; ++i){
		int k = index(a, a.back());
		if(k == -1){
			a.push_back(0);
		} else {
			a.push_back(a.size() - k -1);
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int x = a[n-1];
		cout << count(a.begin(), a.begin()+n, x) <<'\n';
		
	}
	return 0;
}
