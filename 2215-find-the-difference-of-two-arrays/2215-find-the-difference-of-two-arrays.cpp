class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<vector<int>>ans;
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0 ;i<n ;i++)
        {
            mp1[nums1[i]]++;
        }
        for(int i=0 ;i<m ;i++)
        {
            mp2[nums2[i]]++;
        }
        vector<int>v1,v2;
        for(auto i:mp1)
        {
            if(mp2.find(i.first)==mp2.end())v1.push_back(i.first);
        }
        ans.push_back(v1);
        for(auto i:mp2)
        {
            if(mp1.find(i.first)==mp1.end())v2.push_back(i.first);
        }
        ans.push_back(v2);
        return ans;
    }
};