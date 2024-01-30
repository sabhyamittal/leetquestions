class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int minp=nums[0];
        int maxp=nums[0];
        int ans=nums[0];
        for(int i=1 ;i<n ;i++)
        {
            int k=minp,t=maxp;
            minp=min({k*nums[i],t*nums[i],nums[i]});
            maxp=max({k*nums[i],t*nums[i],nums[i]});
            ans=max({ans,minp,maxp});
        }
        return ans;
    }
};