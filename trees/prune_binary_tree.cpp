#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};

class Solution{
	public:
	TreeNode *pruneTree(TreeNode * root) {
		check_remove_zero_subtree(root);
		if (!root->left && !root->right && root->val == 0) return nullptr;
		return root;
	}
	int check_remove_zero_subtree(TreeNode *root) {
		if (!root) return 0;
		int left = check_remove_zero_subtree(root->left);
		int right = check_remove_zero_subtree(root->right);
		if (left == 0 && root->left) {
			auto lft_ptr = root->left;
			root->left = nullptr;
			delete lft_ptr;
		}
		if (right == 0 && root->right) {
			auto rght_ptr = root->right;
			root->right = nullptr;
			delete rght_ptr;
		}
		return left+right+root->val;
	}
}