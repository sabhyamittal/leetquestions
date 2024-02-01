class Solution {
public:
    void f(vector<int>&v,vector<vector<int>>&ans,vector<int>&ds,int ind,int n,int k)
    {
        if(ind>=n)
        {
            if(ds.size()==k)
            {
                ans.push_back(ds);
            }
            return;
        }
        ds.push_back(v[ind]);
        f(v,ans,ds,ind+1,n,k);
        ds.pop_back();
        f(v,ans,ds,ind+1,n,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        for(int i=1 ;i<=n ;i++)
        {
            v.push_back(i);
        }
        vector<vector<int>>ans;
        vector<int>ds;
        f(v,ans,ds,0,n,k);
        return ans;
        
    }
};