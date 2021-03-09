// binary tree traversal
#include < iostream>

using namespace std;

int number = 15;

typedef struct Node *treePointer;
typedef struct Node {
	int data;
	treePointer leftChild, rightChild;
} Node;

void preorder(treePointer ptr)
{
	if (ptr) {
		cout << ptr->data << " ";
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
	}
}

void inorder(treePointer ptr)
{
	if (ptr) {
		preorder(ptr->leftChild);
		cout << ptr->data << " ";
		preorder(ptr->rightChild);
	}
}

void postorder(treePointer ptr)
{
	if (ptr) {
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
		cout << ptr->data << " ";
	}
}

int main()
{
}