class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {

        queue<TreeNode*> q;
        q.push(root);

        int level = 0;

        while (!q.empty()) {

            int n = q.size();

            int prev;

            if (level % 2 == 0)
                prev = INT_MIN;   // for increasing order
            else
                prev = INT_MAX;   // for decreasing order

            for (int i = 0; i < n; i++) {

                TreeNode* node = q.front();
                q.pop();

                int val = node->val;

                if (level % 2 == 0) {

                    // Even level -> odd values & increasing
                    if (val % 2 == 0 || val <= prev)
                        return false;

                } else {

                    // Odd level -> even values & decreasing
                    if (val % 2 == 1 || val >= prev)
                        return false;
                }

                prev = val;

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            level++;
        }

        return true;
    }
};