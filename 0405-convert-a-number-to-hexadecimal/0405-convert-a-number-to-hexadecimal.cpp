class Solution {
public:
    string toHex(int num) {
      unsigned int temp=num;
        if(num==0)return "0";
        string s;
        char arr[]={"0123456789abcdef"};
        while(temp)
        {
            s+=arr[temp%16];
            temp=temp/16;
        }
        cout<<s;
        reverse(s.begin(),s.end());
        return s;
    }
};
