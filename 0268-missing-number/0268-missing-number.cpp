class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int summ=0;
        int sum=0;
        int diff=0;
        for(int i=0 ;i<=n ;i++)
        {
            sum=sum+i;
        }
        for(int i=0 ;i<n ;i++)
        {
            summ=summ+nums[i];
        }
        diff=sum-summ;
        return diff;
    }
};