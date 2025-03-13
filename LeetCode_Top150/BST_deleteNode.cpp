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
// if       delete node is leaf, then delete
// else if  delete node is nonleaf and had only one child, then pull it
// else if  delete node is nonleaf and had two childs, then choose largest leftsubtree node or smallest rightsubtree node
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return nullptr;
        else if(key > root->val){
            root->right = deleteNode(root->right, key);
        }else if(key < root->val){
            root->left = deleteNode(root->left, key);
        }else{
            // leaf , non-leaf and one child
            if(!root->left || !root->right){
                root = root->left? root->left : root->right;
            }
            else{
                // non-leaf and two child, find smallest in right subtree
                TreeNode *curr = root->right;
                while(curr->left) curr = curr->left;
                root->val = curr->val;
                
                root->right = deleteNode(root->right, curr->val);
            }
        }
        return root;
    }
};
