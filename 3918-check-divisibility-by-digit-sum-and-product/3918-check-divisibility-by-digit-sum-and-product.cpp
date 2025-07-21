class Solution {
public:
    bool checkDivisibility(int n) {
        if(n<10){
            return false;
        }
       unsigned long long i=0;
        int x=n;
       unsigned long long z=1;
        while(x>0){
            int y=x%10;
            i=i+y;
             z=z*y;
            x=x/10;
        }
        if(n%(z+i)==0)
            return true;
        else return false;
    }
};