class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)m[nums[i]]++;
        for(int i=0;i<n;i++)
            {
                int temp=nums[i]+1;
                while(m[temp]==0&&i!=n-1)
                {
                    ans.push_back(temp);
                temp++;
                 }
            }
        return ans;
        
    }
};