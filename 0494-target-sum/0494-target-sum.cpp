class Solution {
public:
int dp[21][2001];
int recur(vector<int>&nums,int tar,int st,int sum)
{
    if(sum==tar&&st==nums.size())
    {
    return 1;
    }
    if(st>=nums.size())return 0;
    if(dp[st][sum+1000]!=-1)return dp[st][sum+1000];
      
      int a=  recur(nums,tar,st+1,sum+nums[st]);
      
     int b= recur(nums,tar,st+1,sum-nums[st]);
        return dp[st][sum+1000]=a+b;
    
}
    int findTargetSumWays(vector<int>& nums, int target) {
   memset(dp, -1, sizeof(dp));
  
        int c=0;
        return recur(nums,target,0,0);
        
    }
};