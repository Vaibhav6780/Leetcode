class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int slen =s.length();
        int tlen =t.length();
        if(slen!=tlen) return false;
        vector<int> a(150,1000);
        for(int i=0;i<slen;i++){
            int index=int(s[i]);
            int d=s[i]-t[i];
            if(a[index]!=1000){
                if(a[index]!=d) return false;
            }else{
            a[index]=d;
        }
        }
        
        for(int i=0;i<150;i++)
        a[i]=1000;

         for(int i=0;i<slen;i++){
            int index=int(t[i]);
            int d=t[i]-s[i];
            if(a[index]!=1000){
                if(a[index]!=d) return false;
            }else{
            a[index]=d;
        }
        }

    
     return true;

    }
};