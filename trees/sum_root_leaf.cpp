class Solution {
public:
	struct Node{
		TreeNode *root;
		string num;
		Node(TreeNode *rt, string bin): root(rt), num(bin){}
	}
	
    int sumRootToLeaf(TreeNode* root) {
		queue<Node> q;
		q.push(Node{root, to_string(root->val)});
		vector<int> nums;
		while (!q.empty()) {
			auto tmp = q.front();
			q.pop();
			if (tmp.root->left) 
				q.push(Node{tmp.root->left, tmp.num+to_string(tmp.root->left->val)})
			if (tmp.root->right)
				q.push(Node{tmp.root->right, tmp.num+to_string(tmp.root->right->val)})
			if (!tmp.root->left && !tmp.root->right)
				nums.emplace_back(tmp.num);
		}
		char bs = '0';
		int sum = 0;
		for (auto &i: nums) {
			double pr = 0.0, base = 2.0, incr = 1.0, res = 0.0;
			reverse(i.begin(), i.end());
			for (auto &j: i) {
				res += pow(base, pr) * (j - bs);
				pr += incr;
			}
			sum += int(res);
		}
		return sum;
    }
};