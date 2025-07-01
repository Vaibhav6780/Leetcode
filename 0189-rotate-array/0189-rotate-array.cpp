class Solution {
public:
     void reverse(vector<int>& a,int c,int b){
        for(;c<b;c++,b--){
          int temp=a[b];
          a[b]=a[c];
          a[c]=temp;
        }

     }
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        k%=n;
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-k-1);
        reverse(nums,0,n-1);
    }
};