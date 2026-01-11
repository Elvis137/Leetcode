class Solution {
    void recurse(int ind,vector<int>&ds,vector<vector<int>>&ans)
    {
        int i=0;
        if(ind==ds.size())
        {
            ans.push_back(ds);
            return;
            
        }
        
        for(i=ind;i<ds.size();i++)
        {
            swap(ds[ind],ds[i]);
              recurse(ind+1,ds,ans);
              swap(ds[ind],ds[i]);

        }   

         }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        recurse(0,nums,ans);
        
     return ans;   
    }
};