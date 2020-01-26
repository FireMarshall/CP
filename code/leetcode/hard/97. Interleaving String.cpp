class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length() + s2.length() != s3.length()) return false;

	    vector<vector<int>> dp(s1.length()+1 , vector<int>(s2.length()+1, -1));

        return helper(s1, s2, s3, 0, 0, dp);
        
    }
    
    bool helper(string& s1, string& s2, string& s3, int i, int j, vector<vector<int>>& dp){
        
        int k = i + j;
        if(dp[i][j] != -1) return dp[i][j];
        
        if(k == s3.length()) return true;
        
        if(s3[k] == s1[i]) {
            dp[i][j] = helper(s1, s2, s3, i+1, j, dp);
            if(dp[i][j]) return dp[i][j];
        }
        if(s3[k] == s2[j]){
            dp[i][j] = helper(s1, s2, s3, i, j+1, dp);
            return dp[i][j];
        }
        dp[i][j] = false;
        return dp[i][j];
    }
};
