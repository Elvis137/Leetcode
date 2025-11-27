class Solution {
public:
void recur(vector<int>&nums,int tar,int st,int &c,int sum)
{
    if(sum==tar&&st==nums.size())
    {
    c++;
    return;
    }
    if(st>=nums.size())return;
      
        recur(nums,tar,st+1,c,sum+nums[st]);
      
        recur(nums,tar,st+1,c,sum-nums[st]);
    
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int c=0;
        recur(nums,target,0,c,0);
        return c;
        
    }
};