class Solution {
public:
	
	struct Obj{
		TreeNode * node;
		int x;
		int y;
		Obj(TreeNode *n, int i, int j): node(n), x(i), y(j){}
	};
	
	bool isCousins(TreeNode* root, int x, int y) {
		queue<Obj> q;
		q.push(Obj{root, 0, -1});
		int dth1 = -1, dth2 = -1, par1 = -1. par2 = -1;
		while (!q.empty()) {
			auto tmp = q.front();
			q.pop();
			if (tmp.node->val == x) {
				dth1 = tmp.x;
				par1 = tmp.y;
			}
			if (tmp.node->val == y) {
				dth2 = tmp.x;
				par2 = tmp.y;
			}
			if (!tmp.node->left) q.push(Obj{tmp.node->left, tmp.x+1, tmp.node->val});
			if (!tmp.node->right) q.push(Obj{tmp.node->right, tmp.x+1, tmp.node->val});
			if (dth1 != -1 && dth2 != -1 && par1 != -1 && pary != -1) break;
		}
		return (dth1 == dth2) and (par1 != par2) ? true : false;
	}
};