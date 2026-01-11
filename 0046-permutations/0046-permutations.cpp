class Solution {
public:
void recur(vector<int>& nums,vector<int>&v,vector<vector<int>>&ans,vector<int>&a)
{
    if(v.size()==nums.size()){ans.push_back(v);
    return ;}
    
        for(int i=0;i<nums.size();i++)
        {
            if(!a[i]){
                a[i]=1;
                v.push_back(nums[i]);
                recur(nums,v,ans,a);
                a[i]=0;
                v.pop_back();
            }
        }  

}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        vector<int>a(n,0);
        vector<vector<int>>ans;
        recur(nums,v,ans,a);
    return ans;

        
    }
};