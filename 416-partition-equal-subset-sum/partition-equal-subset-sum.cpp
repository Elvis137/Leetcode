class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
   for(int i=0;i<nums.size();i++)
   {
    sum+=nums[i];
   }
   if(sum%2==1)return false;
   int tar=sum/2;
  vector<bool>dp(tar+1,false);

   dp[0]=true;
   for(auto num:nums)
   {
    for(int j=tar;j>=num;j--)
    {
        dp[j]=dp[j]||dp[j-num];
    }
   }
        return dp[tar];
    }
};