
using namespace std;

/*
Struct TreeNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this struct.
 */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    int maxLength = 0;

public:
    int longestConsecutive(TreeNode* root) {
        preOrder(root, 1, root->val);
        return maxLength;
    }

private:
    void preOrder(TreeNode* root, int sequence, int previous) {
        if (root == nullptr) {
            return;
        }
        int currentLength = (root->val == previous + 1) ? (sequence + 1) : 1;
        maxLength = max(maxLength, currentLength);
        preOrder(root->left, currentLength, root->val);
        preOrder(root->right, currentLength, root->val);
    }
};
