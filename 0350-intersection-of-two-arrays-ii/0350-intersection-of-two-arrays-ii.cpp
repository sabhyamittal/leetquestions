
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m1;
        map<int,int>m2;
        vector<int>ans;
        for(int i=0 ;i<nums1.size();i++)
        {
            m1[nums1[i]]++;
        }
        for(int i=0 ;i<nums2.size();i++)
        {
            m2[nums2[i]]++;
        }
        for(auto x:m1)
        {
            for(auto y:m2 )
            {
                if(x.first==y.first)
                {
                    int mini=min(x.second,y.second);
                    for(int i=0 ;i<mini ;i++)
                    {
                        ans.push_back(x.first);
                    }
                }
            }
        }
        return ans;
    }
};