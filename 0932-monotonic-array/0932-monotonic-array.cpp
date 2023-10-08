class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
         bool inc=true, dec=true;
        for( int i=0; i<end; ++i){

            if(nums[i]<nums[i+1]){
               dec=false;
            }
            
            else if(nums[i]>nums[i+1]){
                inc=false;
            }

            if(inc==false && dec==false){
                return false;
            }
       
       
        }
        return true;
    }
};