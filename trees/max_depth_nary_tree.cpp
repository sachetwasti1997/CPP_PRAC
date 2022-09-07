typedef vector<int> vi;
class Solution {
public:
  int maxDepth(Node* root) {
    int p = 0;
    depth(root, 1, p);
    return p;
  }
  void depth(Node *root, int curr_lvl, int &dpth) {
    if (!root) return;
    dpth = max(curr_lvl, dpth);
    for (auto &i: root->children) {
        depth(i, curr_lvl+1, dpth);
    }
  }
};