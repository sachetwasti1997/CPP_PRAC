typedef vector<int> vi;
typedef unordered_map<int, vi> umivi;
typedef unordered_set<int> usi;
class Solution {
public:
  int amountOfTime(TreeNode* root, int start) {
		queue<TreeNode*> q;
		q.add(root);
		int sz = q.size();
		umivi gr;
		while (!q.empty()) {
			for (int i=0; i<sz; i++) {
				auto tmp = q.front();
				q.pop();
				if (tmp->left) {
					gr[tmp->val].emplace_back(tmp->left->val);
					gr[tmp->left->val].emplace_back(tmp->val);
					q.push(tmp->left);
				}
				if (tmp->right) {
					gr[tmp->val].emplace_back(tmp->right->val);
					gr[tmp->right->val].emplace_back(tmp->val);
					q.push(tmp->right);
				}
			}
			sz = q.size();
		}
		int time = 0;
		usi visit(gr.size());
		calc_time(gr, start, 0, time, visit);
		return time;
  }

	void calc_time(umivi &gr, int node, int time, int &totl_time, usi &visit) {
		visit.insert(node);
		totl_time = max(time, totl_time);
		for (auto &i: gr[node]) {
			if (!visit.count(i)) calc_time(gr, i, time+1, totl_time, visit);
		}
	}
};