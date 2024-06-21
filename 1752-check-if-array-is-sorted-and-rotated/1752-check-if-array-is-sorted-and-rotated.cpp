class Solution {
public:
    bool check(vector<int>& nums) {
        
        int num=nums.size();
        int count=0;
        
        for(int i=1; i<num;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        
        if(nums[num-1]>nums[0]){
            count++;
        }
        
        return count<=1;
        
    }
};