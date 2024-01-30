class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        const int mod=1e9+7;
        vector<int>ns(n,n);
        stack<int>st;
        st.push(0);
        for(int i=1 ;i<n ;i++)
        {
            while(!st.empty() && arr[st.top()]>arr[i])
            {
                ns[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        vector<int>ps(n,-1);
        st=stack<int>();
        st.push(n-1);
        for(int i=n-2 ;i>=0 ;i--)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                ps[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        long long  sum=0;
        for(int i=0 ;i<n;i++)
        {
            sum+=((1LL)*(i-ps[i])*(ns[i]-i)*arr[i])%mod;
            sum=sum%mod;
        }
        return (int)sum;
    }
};