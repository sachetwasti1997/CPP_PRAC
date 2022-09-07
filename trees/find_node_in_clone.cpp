class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* org, TreeNode* cln, TreeNode* trgt) {
		queue<pair<TreeNode*, TreeNode*>> q;
		q.push({orrg, cln});
		while (!q.empty()) {
			auto tmp = q.front();
			q.pop();
			if (tmp.first == trgt) return tmp.second;
			if (!tmp.first->left) q.push({tmp.first->left, tmp.second->left});
			if (!tmp.first->right) q.push({tmp.first->right, tmp.second->right})
		}
		return nullptr;
	}
};