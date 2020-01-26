#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length(), res = 0;
        stack<char> st;
        stack<int> pos;
        char c;
        for(int i = 0; i < n; ++i){
            if(s[i] == '<'){
                st.push(s[i]);
                pos.push(i);
            } else {
                if(st.empty()){
                    break;
                } else {
                    if(st.top() == '<'){
                        st.pop();
                        pos.pop();
                        res += 2;
                    } else {
                        break;
                    }
                }
            } 
            if(i == n-1){
                if(!st.empty()){
                    while(!pos.empty()){
                        res = pos.top();
                        pos.pop();
                    }
                }
            }
        }
        cout << res << "\n";
    }
	return 0;
}

