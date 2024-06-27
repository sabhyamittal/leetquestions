class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int>v;
        map<int,int>mp;
        for(auto i:edges)
        {
            for(auto it:i)
            {
                v.push_back(it);
            }
        }
        int n=v.size();
        for(int i=0 ;i <n ;i++)
        {
            mp[v[i]]++;
        }
        int t,maxi=INT_MIN;
        for(auto i:mp)
        {
           maxi=max(maxi,i.second);
        }
        for(auto i:mp)
        {
            if(i.second==maxi)t= i.first;
        }
        return t;
    }
};