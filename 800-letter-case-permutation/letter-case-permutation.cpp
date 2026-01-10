class Solution {
public:
void recur(string &s,int i,string &v,vector<string>&ans)
{
    if(i==s.size()){ans.push_back(v);
    return;
    }
    if(tolower(s[i])==toupper(s[i])){v.push_back(s[i]);
        recur(s,i+1,v,ans);
                    v.pop_back();  // ✅ ADD THIS

}
   
   else{v.push_back(toupper(s[i]));
    recur(s,i+1,v,ans);
    v.pop_back();
    v.push_back(tolower(s[i]));
    recur(s,i+1,v,ans);
     v.pop_back();
   }

}
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string v="";
        recur(s,0,v,ans);
        return ans;
        
    }
};