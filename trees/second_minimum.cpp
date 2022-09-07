class Solution {
public:
  int findSecondMinimumValue(TreeNode* root) {
		long val = LONG_MAX;
		find(root, val, root->val);
		return val == LONG_MAX ? -1 : val;
  }
	void find(TreeNode * root, long &val, int prev) {
		if (!root) return;
		if (prev < root->val && root->val < val) val = root->val;
		find(root->left, val, prev);
		find(root->right, val, prev);
	}
};