class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int newindex  = 0;
        if(nums.size() <= 1) return nums.size();
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[newindex]){
                nums[++newindex] = nums[i];
            }
        }
        return newindex+1;
    }
};
