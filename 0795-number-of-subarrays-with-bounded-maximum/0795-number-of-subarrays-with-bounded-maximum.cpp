class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int n=nums.size();
        vector<int>ng(n,n);
        stack<int>st;
        st.push(0);
        for(int i=1 ;i<n ;i++)
        {
            while(!st.empty() && nums[st.top()]<nums[i])
            {
                ng[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        vector<int>pg(n,-1);
        st=stack<int>();
        st.push(n-1);
        for(int i=n-2;i>=0 ;i--)
        {
            while(!st.empty() && nums[st.top()]<=nums[i])
            {
                pg[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=left && nums[i]<=right)
            {
                ans+=(i-pg[i])*(ng[i]-i);
            }
        }
        return ans;
    }
};