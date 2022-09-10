
/**
 * @param {TreeNode} root
 * @return {number}
 */
var longestConsecutive = function (root) {
    this.maxLength = 0;
    preOrder(root, 1, root.val);
    return this.maxLength;
};

/**
 * @param {TreeNode} root
 * @param {number} sequence
 * @param {number} previous
 * @return {void}
 */
function preOrder(root, sequence, previous) {
    if (root === null) {
        return;
    }
    let currentLength = (root.val === previous + 1) ? (sequence + 1) : 1;
    this.maxLength = Math.max(this.maxLength, currentLength);
    preOrder(root.left, currentLength, root.val);
    preOrder(root.right, currentLength, root.val);
}

/*
 Function TreeNode is in-built in the solution file on leetcode.com. 
 When running the code on the website, do not include this function.
 */
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}
