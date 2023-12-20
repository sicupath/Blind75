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
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL) return {};
        vector<int> res;
        if((root->left) != NULL){
            res = inorderTraversal(root->left);
        }
        res.push_back(root->val);
        if((root->right) != NULL){
           vector<int> sub2 = inorderTraversal(root->right);
           res.insert(res.end(), sub2.begin(), sub2.end());
        }
        return res;
    }
};

/*
An in-order transversal (IOT) is the one that visits the left branch,
then the node and then the right branch. This is kind of a DFS. We used a recursive approach and is
important to delimit the base case.

The in-order comes because if it was a BST, then we would iterate through the nodes in ascending order.
*/
