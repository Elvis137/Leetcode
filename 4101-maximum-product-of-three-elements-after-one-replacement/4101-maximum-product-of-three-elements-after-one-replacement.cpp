class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long f1=1,f2=1,first=0,seco=0;
       for(int i=0;i<nums.size();i++)
       {
        if(abs(nums[i])>first)
        {
            if(first>seco)seco=first;
        first=abs(nums[i]);
        
        }
        else if(abs(nums[i])==first||abs(nums[i])>seco)
        {
        seco=abs(nums[i]);

        }

       }
    
        return first*seco*100000;
        
    }
};