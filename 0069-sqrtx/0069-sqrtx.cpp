class Solution {
public:
    long long int mySqrt(int x) {
        
        int start=0;
        long long end=x;
        int ans=0;
        long long mid=start+(end-start)/2;
        while(start<=end){
          mid=start+(end-start)/2;
            if((mid*mid)==x){
                return mid;
            }
            else if((mid*mid)>x){ 
               end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};