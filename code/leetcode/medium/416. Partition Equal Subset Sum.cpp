class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto& x: nums){
            sum += x;
        }
        if(sum % 2 != 0) return false;
        
        sum /= 2;
        int dp[nums.size()+1][sum+1];
        
        for(int i = 0; i <= nums.size(); ++i){
            for(int j = 0; j <= sum; ++j){
                if(i == 0 || j == 0) {
                    dp[i][j] = 0;
                    continue;
                }
                if(j - nums[i-1] >= 0)
                    dp[i][j] = max(dp[i-1][j], nums[i-1] + dp[i-1][j-nums[i-1]]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[nums.size()][sum] == sum;
    }
};
