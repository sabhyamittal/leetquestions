class StockSpanner {
public:
    vector<int>ds;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ans=-1;
        if(ds.size()==0)
        {
            ds.push_back(price);
            return 1;
        }
        int n=ds.size();
        for(int i=n-1 ;i>=0 ;i--)
        {
            if(ds[i]>price){
                ans=n-i;
                break;}
        }
        ds.push_back(price);
        if(ans==-1)return ds.size();
        return ans;
    }
};
