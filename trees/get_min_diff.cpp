typedef vector<int> vi;
class Solution {
public:
  int getMinimumDifference(TreeNode* root) {
		int prev = INT_MAX;
    vi res;
		findDiff(root, res);
    for (int i=1; i<res.size(); i++) prev = min(prev, res[i] - res[i-1]); 
		return prev;
  }
	void findDiff(TreeNode *rt, vi &res) {
		if (!rt) return;
		findDiff(rt->left, res);
		res.emplace_back(rt->val);
		findDiff(rt->right, res);
	}
};