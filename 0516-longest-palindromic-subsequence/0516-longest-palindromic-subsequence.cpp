class Solution {
public:
    int func(int i ,int j , string&s , string&temp,vector<vector<int>>&dp)
    {
        if(i==0 || j==0)return 0;
        if(s[i-1]==temp[j-1])return dp[i][j]=1+func(i-1,j-1,s,temp,dp);
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=max(func(i-1,j,s,temp,dp),func(i,j-1,s,temp,dp));
    }
    int longestPalindromeSubseq(string s) {
        string temp=s;
        int i=s.size();
        int j=temp.size();
        reverse(s.begin(),s.end());
        vector<vector<int>>dp(i+1,vector<int>(j+1,-1));
        return func(i,j,s,temp,dp);
    }
};