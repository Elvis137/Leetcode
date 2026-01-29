class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),p=-1,sm=0,small=INT_MAX;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                p=i;
                break;
            }
        }
        if(p==-1)
        {
        reverse(nums.begin(),nums.end());
        return;
        }

        for(int i=n-1;i>p;i--)
        {
            if(nums[i]>nums[p]&&nums[i]<small)
            {
                small=nums[i];
                sm=i;

            }
        }
        swap(nums[p],nums[sm]);
        reverse(nums.begin()+p+1,nums.end());
        
    }
};