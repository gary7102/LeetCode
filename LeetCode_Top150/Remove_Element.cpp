class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int replace_index = 0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] != val){
                if(replace_index == i) replace_index++;
                else{
                    nums[replace_index++] =nums[i];
                    nums[i] = val;
                }
            }
        }
        return replace_index;
    }
};
