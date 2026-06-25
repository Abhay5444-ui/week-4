class Solution {
public:
    void inorderTraversalHelper(vector<int>& order, TreeNode* node) {
        if (!node) {
            return;
        }

        // visit left subtree
        inorderTraversalHelper(order, node->left);

        // visit root
        order.push_back(node->val);

        // visit right subtree
        inorderTraversalHelper(order, node->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> order;
        inorderTraversalHelper(order, root);
        return order;
    }
};
