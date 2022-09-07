typedef vector<int> vi;
class Solution {
public:
  vector<int> preorder(Node* root) {
		if (!root) return vi{};
		vi res;
		preOrd(root, res);
		return res;
  }
	void preOrd(Node *root, vi &res) {
		if (!root) return;
		res.emplace_back(root->val);
		for (auto &i: root->children) {
			preOrd(i, res);
		}
	}
};