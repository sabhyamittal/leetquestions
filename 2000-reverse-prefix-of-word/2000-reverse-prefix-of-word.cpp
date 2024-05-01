class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.length();
        int temp=0;
       for(int i=0 ;i<n ;i++)
       {
           if(word[i]==ch)
           {
               temp=i;
               break;
           }
       }
        cout<<temp;
        reverse(word.begin(),word.begin()+temp+1);
        return word;
    }
};