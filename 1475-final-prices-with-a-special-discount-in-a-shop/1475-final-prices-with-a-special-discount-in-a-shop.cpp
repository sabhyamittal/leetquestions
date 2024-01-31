class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>v;
        v=prices;
        stack<int>st;
        for(int i=0 ;i<n ;i++)
        {
            while(!st.empty() && prices[st.top()]>=prices[i])
            {
                v[st.top()]=prices[st.top()]-prices[i];
                st.pop();
            }
            st.push(i);
        }
        return v;
    }
};