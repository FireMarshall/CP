#include<bits/stdc++.h>

int solve(vector<int> vs, vector<int> ws, int cap){
	int n = vs.size();
	int a[n+1][cap+1];
	for(int i = 0; i <= n; ++i){
		for(int j = 0; j <= cap; ++j){
			if(i == 0 || j == 0) continue;
			if(j-ws[i-1] > 0){
				a[i][j] = max(a[i-1][j]+ws[i-1], a[i-1][j-ws[i]]);
			} else {
				a[i][j] = a[i-1][j];
			}
		}
	}	
	return a[n][cap];
}
