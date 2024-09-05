/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSymmetricSolve(struct TreeNode *left, struct TreeNode *right){
    if(left == NULL || right == NULL){
        return left==right;
    }else if(left->val != right->val) return false;
    return isSymmetricSolve(left->left, right->right) && isSymmetricSolve(left->right, right->left);
}

bool isSymmetric(struct TreeNode* root) {
    if(root == NULL) return true;
    return isSymmetricSolve(root->left, root->right);
}