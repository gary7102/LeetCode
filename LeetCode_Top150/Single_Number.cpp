class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // This is absolutely Genius

        int result = 0;
        for(int a : nums){
            result ^= a;
        }
        return result;
    }
};
