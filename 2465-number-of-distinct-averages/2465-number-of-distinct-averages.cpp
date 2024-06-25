class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<double>st;
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            double av=(nums[i]+nums[j])/double(2);
            st.insert(av);
            i++;
            j--;
        }
        return st.size();
    }
};