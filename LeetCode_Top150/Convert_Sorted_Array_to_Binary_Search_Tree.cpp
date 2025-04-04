/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// 注意 public class 中的 return sortedArrayToBST(nums, 0, nums.size()-1); 和 return sortedArrayToBST(nums, 0, nums.size()); 的使用時機

class Solution {
    TreeNode* sortedArrayToBST(vector<int> &nums, int start, int end){
        if(!(start <= end)) return nullptr;
        int mid = (start+end)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left  = sortedArrayToBST(nums, start, mid-1);
        root->right = sortedArrayToBST(nums, mid+1, end);

        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size()-1);
    }
};
