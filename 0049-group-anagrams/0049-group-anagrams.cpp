
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for(auto str: strs){
            string key = str;
            sort(key.begin(), key.end());
            mp[key].push_back(str);
        }
        for(auto ele: mp){
            ans.push_back(ele.second);
        }
        return ans;
    }
};