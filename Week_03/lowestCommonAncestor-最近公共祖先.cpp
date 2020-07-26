
#include "stdafx.h"
#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

/**
* Definition for a binary tree node.
*/
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

 // 1. 存在于 root
 // 2. 存在 left tree
 // 3. 存在 right tree
 // 4. 存在 left && right
 //
class Solution {
public:
	TreeNode* ans;

	bool dfs(TreeNode* root,TreeNode* p,TreeNode* q) {
	
		if (NULL == root) {
			return false;
		}
		
		bool lson = dfs(root->left, p, q);
		bool rson = dfs(root->right, p, q);

		if ( (lson && rson) ||
			( (p->val == root->val) || (q->val == root->val) ) && (lson || rson) ){
			ans = root;
		}

		return lson || rson || (p->val == root->val || q->val == root->val);
	}

	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		dfs(root, p, q);
		return ans;
	}
};

 typedef struct TreeNode* pTreeNode;


int main()
{
	pTreeNode node1 = new TreeNode(1);
	pTreeNode node2 = new TreeNode(2);
	pTreeNode node3 = new TreeNode(3);
	pTreeNode node4 = new TreeNode(4);
	pTreeNode root = new TreeNode(5);
	pTreeNode node6 = new TreeNode(6);
	pTreeNode node7 = new TreeNode(7);
	pTreeNode node8 = new TreeNode(8);

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

	pTreeNode resNode = inorderSolution.lowestCommonAncestor(root, node1, node8);

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




