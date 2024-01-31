class Solution {
public:
    void cs(vector<int>&candidates,int target,int ind,vector<int>&ds,vector<vector<int>>&ans)
    {
        int n=candidates.size();
        if(ind==n)
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        //pick the element
        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            cs(candidates,target-candidates[ind],ind,ds,ans);
            ds.pop_back();
        }
        cs(candidates,target,ind+1,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        cs(candidates,target,0,ds,ans);
        return ans;
    }
};