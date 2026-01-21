class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        string temp;
        sort(s1.begin(),s1.end());
        int i=0,k=s1.size(),n=s2.size();
        int j=0;
        while(j<n-k+1)
        {
            string temp=s2.substr(i,k);
            sort(temp.begin(),temp.end());
            if(temp==s1)return true;
            i++;j++;
        }
        return false;
    }
};