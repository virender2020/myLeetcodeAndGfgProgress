class Solution {
public:
    long long mySqrt(int x) {
        int s=0;
        int e=x;
        long long mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
          if(mid*mid==x){
            return mid;   
          }
          else if(mid*mid>x){
             e=mid-1;
          }
          else if(mid*mid<x){
             ans=mid;
             s=mid+1;
           }
           mid=s+(e-s)/2;
        }
        return ans;
    }
};