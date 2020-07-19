
#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

//¶þ²æÊ÷ÖÐÐò±éÀú
/**
* Definition for a binary tree node.
*/
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 typedef struct TreeNode* pTreeNode;


class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		
		vector<int> nodes;
		inorder(root, nodes);
		return nodes;
	}

private:
	void inorder(TreeNode* root, vector<int>& nodes) {
		if (!root) {
			return;
		}

		inorder(root->left, nodes);
		nodes.push_back(root->val);
		inorder(root->right, nodes);
	}
};

int main()
{
	pTreeNode node1 = new TreeNode();
	pTreeNode node2 = new TreeNode();
	pTreeNode node3 = new TreeNode();
	pTreeNode node4 = new TreeNode();
	pTreeNode root = new TreeNode();
	pTreeNode node6 = new TreeNode();
	pTreeNode node7 = new TreeNode();
	pTreeNode node8 = new TreeNode();

	node1->val = 1;
	node1->left = NULL;
	node1->right = NULL;

	node2->val = 2;
	node2->left = node1;
	node2->right = NULL;

	node4->val = 4;
	node4->left = NULL;
	node4->right = NULL;

	node3->val = 3;
	node3->left = node2;
	node3->right = node4;

	node6->val = 6;
	node6->left = NULL;
	node6->right = NULL;

	node8->val = 8;
	node8->left = NULL;
	node8->right = NULL;

	node7->val = 7;
	node7->left = node6;
	node7->right = node8;

	root->val = 5;
	root->left = node3;
	root->right = node7;

	vector<int> inorder;
	
	Solution inorderSolution;

	inorder = inorderSolution.inorderTraversal(root);

	if (node1) {
		delete node1;
	}
	if (node2) {
		delete node2;
	}
	if (node3) {
		delete node3;
	}
	if (node4) {
		delete node4;
	}
	if (root) {
		delete root;
	}
	if (node6) {
		delete node6;
	}
	if (node7) {
		delete node7;
	}
	if (node8) {
		delete node8;
	}

    return 0;
}




