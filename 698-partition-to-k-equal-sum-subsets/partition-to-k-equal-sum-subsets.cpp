class Solution {
public:
bool recur(vector<int>&nums,vector<bool>&used,int tar,int k,int currsum,int st)
{
    if(k==1)return true;
    if(currsum==tar)return recur(nums, used, tar,k-1,0,0);
    for(int i=st;i<nums.size();i++)
    {
        if(used[i]==false&&currsum+nums[i]<=tar)
        {
            used[i]=true;
         if (recur(nums, used, tar,k,currsum+nums[i],i+1)) return true;
            used[i]=false;
        }
        else  continue;
    }
    return false;
}
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int tar = accumulate(nums.begin(), nums.end(), 0);
        if(tar%k!=0)return false;
        tar=tar/k;
        vector<bool>used(nums.size(),false);
        sort(nums.rbegin(), nums.rend());
       return recur(nums,used,tar,k,0,0);
       
    }
};