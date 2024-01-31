class Solution {
public:
    void cs(vector<vector<int>>&ans,vector<int>ds,int ind,vector<int>& arr, int target)
    {
        int n=arr.size();
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<n;i++)
        {
            if(i>ind && arr[i]==arr[i-1])continue;
            if(arr[i]>target)break;
            
            ds.push_back(arr[i]);
            cs(ans,ds,i+1,arr,target-arr[i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        cs(ans,{},0,candidates,target);
        return ans;
    }
};