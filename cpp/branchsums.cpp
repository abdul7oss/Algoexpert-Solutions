#include <bits/stdc++.h> 
using namespace std;
class BinaryTree {
public:
int value;
BinaryTree *left;
BinaryTree *right;
BinaryTree(int value) {
this->value = value;
this->left = NULL;
this->right = NULL;
}
};
// O(n) time | O(n) space - where n is the number of nodes in the Bina
vector<int> branchSums(BinaryTree *root);
void calculateBranchSums(BinaryTree *node, int runningSum, vector<int> &sums);


vector<int> branchSums(BinaryTree *root) {
vector<int> sums;
calculateBranchSums(root, 0, sums);
return sums;
}





void calculateBranchSums(BinaryTree *node, int runningSum, vector<int> &sums){
	if (node == NULL){
		return;
	}



	int newRunningSum = runningSum + node->value;

	if (node->left == NULL && node->right == NULL){


	
sums.push_back(newRunningSum);
return ;
}

calculateBranchSums(node->left, newRunningSum, sums);
calculateBranchSums(node->right, newRunningSum, sums);
}



int main() {
 BinaryTree * a = new BinaryTree(5);
 a->left = new BinaryTree(5);
 a->right = new BinaryTree(5);
 vector<int> g = branchSums(a);
 cout << g[0]<<g[1];


	return 0;
}