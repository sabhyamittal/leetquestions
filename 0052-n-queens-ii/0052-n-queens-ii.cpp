class Solution {
public:
    bool issafe(int row ,int col ,vector<string>&board , int n)
    {
        int dc=col;
        int dr=row;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')return false;
            row--;
            col--;
        }
        col=dc;
        row=dr;
        while(col>=0)
        {
            if(board[row][col]=='Q')return false;
            col--;
        }
        col=dc;
        row=dr;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col , vector<string>&board , int n,int &count)
    {
        if(col==n)
        {
            count++;
            return;
        }
        for(int row=0 ;row<n ;row++)
        {
            if(issafe(row,col,board,n))
            {
                board[row][col]='Q';
                solve(col+1,board,n,count);
                board[row][col]='.';
            }
        }
        
    }
    int totalNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0 ;i<n ;i++)
        {
            board[i]=s;
        }
        int count=0;
        solve(0,board,n,count);
        
        return count;
    }
};