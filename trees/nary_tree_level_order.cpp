typedef vector<int> vi;
typedef vector<vi> vvi;
class Solution {
public:
	vector<vector<int>> levelOrder(Node* root) {
  		if (!root) return 
		queue<Node*> q;
		q.add(root);
		int sz = 1;
		vvi res;
		while (!q.empty()) {
			vi tmp;
			for (int i=0; i<sz; i++) {
				int t = q.front();
				q.pop();
				tmp.emplace_back(t->val);
				if (t->left) q.push(t->left);
				if (t->right) q.push(t->right);
			}
			res.emplace_back(tmp);
			sz = q.size();
		}      
		return res;
    }
};