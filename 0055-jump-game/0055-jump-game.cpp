class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(),maxr=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0&&maxr==i&&i!=n-1)return false;
            maxr=max(maxr,nums[i]+i);
            if(maxr>=n-1)return true;
        }
        return false;
        
    }
};