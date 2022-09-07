class Solution {
public:
  string tree2str(TreeNode* root) {
		string res = "";
		str_append(root, res);
		return res;
  }
	void str_append(TreeNode *root, string &res) {
		if (!root) return;
    res += to_string(root->val);
    if(!root->left && !root->right) return;
		res += "(";
		str_append(root->left, res);
    res += ")";
    if (root->right) {
      res += "(";
      str_append(root->right, res);
		  res+=")"; 
    }
	}
};