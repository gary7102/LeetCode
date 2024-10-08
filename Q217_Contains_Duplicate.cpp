#include <iostream>
#include <string>
#include <map>

using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            if(seen[num]>=1) return true;
            seen[num]+=1;
        }    
    return false;
    }
};