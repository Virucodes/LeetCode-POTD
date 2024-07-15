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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
    unordered_map<int, TreeNode*> nodes;
    unordered_set<int> children;

    // Create all nodes and mark children
    for (const auto& desc : descriptions) {
        int parentVal = desc[0];
        int childVal = desc[1];
        bool isLeft = desc[2] == 1;

        if (nodes.find(parentVal) == nodes.end()) {
            nodes[parentVal] = new TreeNode(parentVal);
        }
        if (nodes.find(childVal) == nodes.end()) {
            nodes[childVal] = new TreeNode(childVal);
        }

        if (isLeft) {
            nodes[parentVal]->left = nodes[childVal];
        } else {
            nodes[parentVal]->right = nodes[childVal];
        }

        children.insert(childVal);
    }

    // Find the root
    TreeNode* root = nullptr;
    for (const auto& [val, node] : nodes) {
        if (children.find(val) == children.end()) {
            root = node;
            break;
        }
    }

    return root;
}
};