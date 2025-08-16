class Solution {
public:
    int countDigits(int num) {
        int x=num;
        int c=num;
        int count=0;
        while(x>0){
         c=x%10;
         if(num%c==0)
         count++;
          x=x/10;
        }
        return count;
    }
};