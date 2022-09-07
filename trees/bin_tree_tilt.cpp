#include <bits/stdc++.h>
using namespace std;
typedef unordered_map<int, int> umi;
class Solution {
public:
    int findTilt(TreeNode* root) {
  		int sum = 0;
		find(root, sum);
		return sum;
    }
	
	int find(TreeNode *root, int &sum) {
		if (!root) return 0;
		int left = find(root->left, sum);
		int right = find(root->right, sum);
		sum = abs(left-right);
		return left+right+root->val;
	}

};