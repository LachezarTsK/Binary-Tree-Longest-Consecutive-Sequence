
public class Solution {

    int maxLength = 0;

    public int longestConsecutive(TreeNode root) {
        preOrder(root, 1, root.val);
        return maxLength;
    }

    private void preOrder(TreeNode root, int sequence, int previous) {
        if (root == null) {
            return;
        }
        int currentLength = (root.val == previous + 1) ? (sequence + 1) : 1;
        maxLength = Math.max(maxLength, currentLength);
        preOrder(root.left, currentLength, root.val);
        preOrder(root.right, currentLength, root.val);
    }
}

/*
Class TreeNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this class.
 */
class TreeNode {

    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
