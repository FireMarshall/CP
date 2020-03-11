int is_palindrome(string s, int l, int h){
	int ans = 0;
	while(l >= 0 && h < s.length() && s[l] == s[h]){
		ans += 2;
		--l;
		++h;
	}
	return ans;
}

string solve(string s){
	int gman = 0, l;
	for(int i = 1; i < s.length(); ++i){
		int tmp = is_palindrome(s, i-1, i+1);
		if(tmp+1 > gman) {
			l = i+1 - tmp / 2 ;
			gman = tmp;
		}
		tmp = is_palindrome(s, i-1, i);
		if(tmp > gman){
			l = i - tmp/2;
			gman = tmp;
		}
	}
	return s.substr(l, ans);
}
