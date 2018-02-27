#include "BinaryTree.h"

#include <iostream>
#include <stdlib.h>
#include <malloc.h>

using namespace std;

BinaryTree::BinaryTree() {
	createTree(root);
}

void BinaryTree::createTree(TreeNode *node){
	char ch;
	cin>>ch;
	if (ch == '#') {
		return;
	} 
	if (node == NULL){
		node = (TreeNode *)malloc(sizeof(TreeNode));
	}
	if (node == NULL){
		cout<<"Memory Malloc Failuer!"<<endl;
		exit(-1);
	}
	node->val = ch;
	createTree(node->left);
	createTree(node->right);
}

void BinaryTree::inorderTreeWalk(TreeNode *node){
	if (node!=NULL){
		cout<<node->val<<" ";
		inorderTreeWalk(node->left);
		inorderTreeWalk(node->right);
	} else {
		return;
	}
}

void BinaryTree::preorderTreeWalk(TreeNode *node){
	if (node == NULL){
		return ;
	}
	preorderTreeWalk(node->left);
	cout<<node->val<<" ";
	preorderTreeWalk(node->right);
}

void BinaryTree::postorderTreeWalk(TreeNode *node){
	if (node == NULL){
		return;
	}
	postorderTreeWalk(node->right);
	cout<<node->val<<" ";
	postorderTreeWalk(node->left);
}

TreeNode* BinaryTree::getRootNode(){
	return this->root;
}