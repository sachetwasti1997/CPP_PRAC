typedef vector<int> vi;

class Node{
  public:
		int val;
		Node *left;
		Node *right;
		Node *parent;
}

Node *findLeft(Node *node) {
	while (node->left) {
		node = node->left;
	}
	return node;
}

Node * findParent(Node *node) {
	while (node -> parent && node->parent->right == node) {
		node = node->parent;
	}
	return node->parent;
}

Node* inorderSuccessor(Node* node) {
	if (node->right) {
		return findLeft(node->right);
	}else {
		return findParent(node);
	}
}