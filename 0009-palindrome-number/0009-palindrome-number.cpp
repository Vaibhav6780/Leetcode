class Solution {
public:
    bool isPalindrome(int x) {
        int u=x;
        long z,y=0;
        while(u>0){
            z=u%10;
            y=y*10+z;
            u=u/10;
        }
        if(x==y)
        return true;
        else
        return false;
    }
};