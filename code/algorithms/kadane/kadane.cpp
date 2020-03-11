int kadane(vector<int> a){
	int ans = a[0];
	int lmax = a[0];
	for(int i = 0; i < a.size(); ++i){
		lmax = max(lmax+ a[i], 0);
		ans = max(lmax, ans);
	}
	return ans;
}
