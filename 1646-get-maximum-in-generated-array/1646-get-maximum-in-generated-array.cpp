class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n <= 1)   // base condition 
            return n; 
        vector<int>v(n+1); // create a vector of size+1
        v[0] = 0; // given in the  problem statement
        v[1] = 1; // given in the  problem statement
        for(int i=2; i<=n; i++) {
            if(i%2) {
                v[i] = v[i/2] + v[i/2 + 1]; // if a number is odd than we should add middle and middle+1 element
            }
            else {
                v[i] = v[i/2]; // if a number is even the we should put the middle element
            }
        }
        return *max_element(v.begin(),v.end()); // return the maximum of all the element
        
    }
};