class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char>mp;
        string str="abcdefghijklmnopqrstuvwxyz";
        mp[' ']=' ';
        int index=0;
        for(int i=0 ;i<key.size();i++)
        {
            if(mp[key[i]]==0)
            {
                mp[key[i]]=str[index];
                index++;
            }
        }
        for(int i=0 ;i<message.size();i++)
        {
            message[i]=mp[message[i]];
        }
        return message;
    }
};

  