class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        // If both nodes are smaller, go left
        if (p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);

        // If both nodes are greater, go right
        if (p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p, q);

        // Split point found
        return root;
    }
};
