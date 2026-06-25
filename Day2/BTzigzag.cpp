class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if (!root)
            return ans;

        q.push(root);
        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();

                level.push_back(temp->val);

                if (temp->left)
                    q.push(temp->left);

                if (temp->right)
                    q.push(temp->right);
            }

            // Reverse every alternate level
            if (!leftToRight) {
                reverse(level.begin(), level.end());
            }

            ans.push_back(level);

            // Change direction for next level
            leftToRight = !leftToRight;
        }

        return ans;
    }
};
