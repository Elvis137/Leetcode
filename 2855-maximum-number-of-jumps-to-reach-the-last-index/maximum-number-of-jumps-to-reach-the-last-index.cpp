class Solution {
public:
int recur(vector<int>& nums, int tar,int st, vector<int> &dp)
{
    if(st==nums.size()-1)return 0; 
            if (dp[st] != -1) return dp[st];

        int m=INT_MIN;

    for(int i=st+1;i<nums.size();i++)
    {
        if(abs(nums[i]-nums[st])<=tar)
        {
            m=max(m,1+recur(nums,tar,i,dp));
    }
    }
        return dp[st] = m;

}
    int maximumJumps(vector<int>& nums, int target) {
            vector<int> dp(nums.size(), -1);
     int ans=recur(nums,target,0,dp);
        if(ans>0)
           return ans;
        else
            return -1;        
    }
};