class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,0);
        dp[0]=nums[0];
        int mx=dp[0];
        for(int i=1 ;i<n ;i++)
        {
            dp[i]=max(nums[i],nums[i]+dp[i-1]);
            mx=max(dp[i],mx);
        }
        return mx;
    }
};