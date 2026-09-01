class Solution {
public:

    pair<int, int> solve(TreeNode* root) {
        
        // Base case
        if (root == NULL) {
            return {0, 0};
        }

        // Get answers from left and right subtree
        pair<int, int> left = solve(root->left);
        pair<int, int> right = solve(root->right);

        // Rob current node
        int rob = root->val + left.second + right.second;

        // Don't rob current node
        int notRob = max(left.first, left.second)
                   + max(right.first, right.second);

        return {rob, notRob};
    }

    int rob(TreeNode* root) {

        pair<int, int> ans = solve(root);

        return max(ans.first, ans.second);
    }
};