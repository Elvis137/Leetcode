class Solution {
public:
int dp[201][201];
int recur(vector<vector<int>>&arr ,int i,int j)
{ long long a=0,b=0;
if(dp[i][j]!=-1)return dp[i][j];
    if(i==arr.size()-1)
    {
    return dp[i][j]= arr[i][j];
    }

    a=recur(arr,i+1,j+1)+arr[i][j];
   b= recur(arr,i+1,j)+arr[i][j];
    return dp[i][j]=min(a,b);

}
    int minimumTotal(vector<vector<int>>& triangle) {
      memset(dp,-1,sizeof(dp));
      return  recur(triangle,0,0);
    }
};