class Solution {
public:
  int rangeSumBST(TreeNode* root, int low, int high) {
    int sum = 0;
		calc_sm(root, low, high, sum);
		return sum;
  }
	void calc_sm(TreeNode *root, int low, int high, int &sm) {
		if (!root) return;
		if (low <= root->val && high >= root->val) sm += root->val;
		calc_sm(root->left, low, high, sm);
		calc_sm(root->right, low, high, sm);
	}
};