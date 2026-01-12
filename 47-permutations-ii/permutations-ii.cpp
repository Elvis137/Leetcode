class Solution {
public:


void recur(vector<int>&nums,vector<int>&v,vector<vector<int>>&ans,vector<int>&a)
{
    if(v.size()==nums.size())
    {
        ans.push_back(v);
        return;
    }
    for(int i=0;i<nums.size();i++)

    {
        if(!a[i])
        {
            if(i>0&&nums[i]==nums[i-1]&&a[i-1]){continue;}
            a[i]=1;
            v.push_back(nums[i]);
            recur(nums,v,ans,a);
            a[i]=0;
            v.pop_back();
        }

        

    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>ans;
         sort(nums.begin(),nums.end());
        vector<int>a(nums.size(),0);
        vector<int>v;
        recur(nums,v,ans,a);
        return ans;
        
    }
};