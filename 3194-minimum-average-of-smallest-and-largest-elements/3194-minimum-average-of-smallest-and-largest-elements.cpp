class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>averages;
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        int i=0;
        double mini=0;
        while(i<j)
        {
            double av=(nums[i]+nums[j])/double(2);
            averages.push_back(av);
            i++;
            j--;
        }
        sort(averages.begin(),averages.end());
        return averages[0];
    }
};