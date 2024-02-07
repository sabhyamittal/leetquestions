class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        vector<pair<int,char>>v;
        for(int i=0 ;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(auto &it : mp){
            v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());
        string ans="";
        for(auto &i:v)
        {
            for(int j=0 ;j<i.first ; j++)
            {
                ans+=i.second;
            }
        }
        return ans;
        
    }
};