class Solution {
public:
    int mySqrt(int x) {
// // int i;
// // for(i=0;i<=999;i++){
// //     if(i*i==x)literally first year Solution
// //     break;
    
// // }
// if(x==1) return 1;
// int y=x/2;
// int nearest=0;
// for(int i=0;i<y;i++){
//     if((y*y)==x)
//     return y;
// }   
// int k=x/4;
// return k;

// } this question was approached by me before learning binary search 
//  10 september 2025 -->After learning binary search<--
int lo=0;
int hi=x;
while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    long long m=(long long)(mid);
    long long y=(long long)(x);
    if(m*m==x) 
        return mid;
    else if(m*m>y) 
        hi=mid-1;
    else{
        lo=mid+1;   
    }
}
return hi;
    }
};