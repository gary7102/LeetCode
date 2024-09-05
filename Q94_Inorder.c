/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *output = (int *)malloc(100 * sizeof(int));
    *returnSize = 0;

    void inorder(struct TreeNode* root, int *output, int *returnSize){
        if(root != NULL){
            inorder(root->left, output, returnSize);
            output[*returnSize] = root->val;
            (*returnSize)++;
            inorder(root->right, output, returnSize);
        }
    }

    inorder(root, output, returnSize);
    return output;
}