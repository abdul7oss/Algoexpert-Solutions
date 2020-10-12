#include <iostream>
using namespace std;

class BinaryTree {
public:
int value;
BinaryTree *left;
BinaryTree *right;
BinaryTree(int value) {
this->value = value;
left = NULL;
right = NULL;
}
};


int nodeDepths(BinaryTree *root, int depth);

int nodeDepths(BinaryTree *root, int depth = 0) {
if (root == NULL)
return 0;
return depth + nodeDepths(root->left, depth + 1) +
nodeDepths(root->right, depth + 1);
}

int main(){

	BinaryTree *a = new BinaryTree(1);
	a->left = new BinaryTree(1);
	a->right = new BinaryTree(5);
	a->left->left = new BinaryTree(4);
	a->left->right = new BinaryTree(5);
	a->right->left = new BinaryTree(6);
	a->right->right = new BinaryTree(7);
	a->left->left->left = new BinaryTree(8);
	a->left->left->right = new BinaryTree(9);

	BinaryTree *c = a;

	



	int b = nodeDepths(c);
	cout << b;

	return 0;
}