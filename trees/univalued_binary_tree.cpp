class Solution {
public:
  bool isUnivalTree(TreeNode* root) {  
		int ch = root->val;
		return check(root, ch);
  }
	bool check(TreeNode *root, int ch) {
		if (!root) return true;
		return ch == root->val && check(root->left, ch) && check(root->right, ch);
	}
};