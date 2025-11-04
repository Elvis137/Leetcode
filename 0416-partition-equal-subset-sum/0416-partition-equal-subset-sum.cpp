class Solution {
public:
int dp[201][10001];
bool  recur(vector<int>&nums,int i,int tar)
{
    if(i>=nums.size()||tar<0)return false;

    if(tar==0) {
    dp[i][tar]=true;
    return  dp[i][tar];
    }
    if( dp[i][tar]!=-1)return  dp[i][tar];

    int take=false,ntake=false;
    if(nums[i]<=tar){
    take=recur(nums,i+1,tar-nums[i]);
    
    }
        ntake=recur(nums,i+1,tar);

    return dp[i][tar]=take||ntake;

}
    bool canPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int s=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)s=s+nums[i];
        if(s%2==1){cout<<1;return false;}
        else return recur(nums,0,s/2);
        
    }
};