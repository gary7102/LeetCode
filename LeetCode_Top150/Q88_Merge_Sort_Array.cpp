class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;              // back of nums1
        int j = n-1;                // back of nums2
        int curr_index = m+n-1;    // record the current index
        while(j >= 0 && i >= 0){
            if(nums1[i] < nums2[j]){
                nums1[curr_index--] = nums2[j--];
            }else{
                nums1[curr_index--] = nums1[i--];
            }
        }
        if(j >= 0){
            // put the rest of nums1 to nums1
            while(j>=0) nums1[curr_index--] = nums2[j--];
        }else if(i >= 0){
            // put the rest of nums2 to nums1
            while(i>=0) nums1[curr_index--] = nums1[i--];
        }
    }
};