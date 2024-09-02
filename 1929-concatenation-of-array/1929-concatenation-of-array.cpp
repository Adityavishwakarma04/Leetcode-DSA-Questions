class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i=0;
        int s=nums.size();
        for(i; i<s;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};