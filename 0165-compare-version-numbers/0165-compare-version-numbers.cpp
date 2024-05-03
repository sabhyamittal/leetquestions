class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0 ,j=0,num1=0,num2=0;
        int n=version1.size();
        int m=version2.size();
        while(i<n || j<m)
        {
            while(i<n && version1[i]!='.')
            {
                num1=num1*10+(version1[i]-'0');
                i++;
            }
            while(j<m && version2[j]!='.')
            {
                num2=num2*10+(version2[j]-'0');
                j++;
            }
            if(num1>num2)
            {
                return 1;
            }
            if(num2>num1)
            {
                return -1;
            }
            num1=0;
            num2=0;
            i++;
            j++;
        }
        return 0;
    }
};


