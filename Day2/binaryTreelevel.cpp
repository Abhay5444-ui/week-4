class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        // Base Case: root is NULL
        if (!root)
            return ans;

        // Push root to queue
        q.push(root);

        while (!q.empty()) {              // loop until no nodes left
            vector<int> level;            // to store current level
            int size = q.size();          // no. of nodes in current level

            for (int i = 0; i < size; i++) {   // loop for each node in current level
                TreeNode* temp = q.front();    // store and pop front node
                q.pop();

                level.push_back(temp->val);    // store node value

                if (temp->left)
                    q.push(temp->left);        // push left child for next level

                if (temp->right)
                    q.push(temp->right);       // push right child for next level
            }

            ans.push_back(level);              // store current level in ans
        }

        return ans;
    }
};
