typedef vector<int> vi;
class Solution {
public:
  vector<int> postorder(Node* root) {
    if (!root) return vi{};
		vi res;

  }
	void traverse(Node *root, vi &res) {
		if (!root) return;
		for (auto &i: root.children) {
			traverse(i, res);
		}
		res.emplace_back(root->val);
	}
};