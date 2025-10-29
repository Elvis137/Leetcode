class Solution {
public:
int dp[301][301];
int recur(vector<vector<char>> &arr,int i,int j)
{
    if(dp[i][j]!=-1)return dp[i][j];
    if(i>=arr.size()||j>=arr[0].size())return dp[i][j]=0;
    if(arr[i][j]=='0'){return dp[i][j]=0;}

    int a=recur(arr,i+1,j);
    int b=recur(arr,i+1,j+1);
   int c=recur(arr,i,j+1);
    return dp[i][j]=1+min(c,min(a,b));

    
}
    int maximalSquare(vector<vector<char>>& matrix) {
    int ans=0;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++)
        ans=max(ans,recur(matrix,i,j));
    }
        return ans*ans;
        
    }
};