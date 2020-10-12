#include<iostream>
#include<vector>
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
struct Level {
BinaryTree *root;
int depth;
};

struct Level1 {
int  root;
int dep;
};

int main(){
	vector<Level1> stack = {{1,2},{3,4}};

	cout << stack[0].dep;

	return 0;
}