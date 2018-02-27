#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct TreeNode {
	char val;
	struct TreeNode *left, *right;
}TreeNode;

class BinaryTree {
private:
	TreeNode *root;

	void createTree(TreeNode *node);
public:
	BinaryTree();
	~BinaryTree();

	void inorderTreeWalk(TreeNode *node);

	void preorderTreeWalk(TreeNode *node);

	void postorderTreeWalk(TreeNode *node);
};

#endif