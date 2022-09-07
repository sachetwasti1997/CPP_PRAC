typedef vector<int> vi;
class Solution {
public:
    vector<int> getLonelyNodes(TreeNode* root) {
      if (!root->left && !root->right) return vi{};
	  queue<pair<TreeNode*, TreeNode*>> q;
	  TreeNode *par{nullptr};
	  q.push({root, par});
	  vi res;
	  while (!q.empty()) {
		auto tmp = q.front();
		q.pop();
		if (tmp.second) {
			if (!tmp.second->left or !tmp.second->right) res.emplace_back(tmp.first->val); 
		}	
		if (tmp.first->left) q.push({tmp.first->left, tmp.first});
		if (tmp.first->right) q.push({tmp.first->right, tmp.first});
	  }
      return res;
  }
};