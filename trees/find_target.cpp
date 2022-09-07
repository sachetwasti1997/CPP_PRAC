typedef unordered_set<int> usi;
class Solution {
public:
  bool findTarget(TreeNode* root, int k) {
		usi sett;
		return find(root, k, sett);
  }
	bool find(TreeNode *root, int k, usi & nums) {
		if (!root) return false;
		if (nums.count(k - root->val)) return true;
		nums.insert(root->val);
		return find(root->left, k-root->val, nums) || find(root->right, k-root->val, nums);
	}
};