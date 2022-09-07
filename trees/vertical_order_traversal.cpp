typedef vector<int> vi;
typedef vector<vi> vvi;
//milk_man - 2552
class Solution {
public:
  vector<vector<int>> verticalTraversal(TreeNode* root) {
		unordered_map<int, vi> mp;
		queue<pair<TreeNode *, int>> q;
		q.push({root, 0});
		int min_val = INT_MAX, max_val = INT_MIN, sz = 1; 
		while (!q.empty()) {
			sz = q.size();
			map<int, set<int>> mapset;
			for (int i=0; i<sz; i++) {
				auto tmp = q.front();
        auto node = tmp.first;
        int position = tmp.second;
				mapset[position].insert(node->val);
				min_val = min(min_val, position); 
				max_val = max(max_val, position);
				q.pop();        
				if (node->left) q.push({node->left, position-1});
				if (node->right) q.push({node->right,position+1});
			}
			for (auto &it: mapset) {
				for (auto &it2: it) mp[it.first].emplace_back(it2);
			}
		}
		vvi res;
		for (int i=min_val; i<=max_val; i++) {
			res.emplace_back(mp[i]);
		}
		return res;
  }
};