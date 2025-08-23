class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1) return strs[0];
        int count=0;
        string str="";
        sort(strs.begin(),strs.end());
        if(strs[0][0]!=strs[n-1][0]) return str;
        for(int i=0;i<strs[0].size() || i<strs[n-1].size();i++){
            if(strs[0][i]==strs[n-1][i])
            str=str+strs[0][i];
            else return str;
        }
        return str;


        
    }
};