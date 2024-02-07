class Solution {
public:
    int percentageLetter(string s, char letter) {
        int sz=s.length();
        map<char,int>mp;
        for(int i=0;i<sz;i++)
        {
            mp[s[i]]++;
        }
        int temp=0;
        for(auto i:mp)
        {
            cout<<i.first<<" "<<i.second;
        }
        for(auto it:mp)
        {
            if(it.first==letter)temp=it.second;
        }
        int ans=0;
        ans=(temp*100)/sz;
        return ans;
    }
};