class Solution {
public:
    int jump(vector<int>& a) {
        int n = a.size();
        if (n < 2) return 0;
        int maxReachable = a[0], currReachable = a[0], ans = 1;
        for (int i = 1; i < n; ++i) {
            if (i > currReachable) {
                ++ans;
                currReachable = maxReachable;
            }
            maxReachable = max(maxReachable, i + a[i]);
        }
        return ans;
    }
};
