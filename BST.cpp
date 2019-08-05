#include<bits/stdc++.h>
using namespace std;

void inOrder(struct node* root);
void preOrder(struct node* root);
void postOrder(struct node* root);

struct node{
	int data;
	node *left;
	node *right;
};

struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}

int main()
{
	struct node* root = newNode(1);
	root -> left = newNode(2);
	root -> right = newNode(3);
	root -> left -> left = newNode(4);
	root -> left -> right = newNode(5);
	root -> right -> left = newNode(6);
	root -> right -> right = newNode(7);
	cout << "In Order: " << endl;
	inOrder(root);
	cout << "Pre Order:" << endl;
	preOrder(root);
	cout << "Post Order:" << endl;
	postOrder(root);
}

void inOrder(struct node* root)
{
	if(root == NULL)
		return;
	inOrder(root->left);
	cout << root->data << endl;
	inOrder(root->right);

}

void preOrder(struct node* root)
{
	if(root == NULL)
		return;
	cout << root->data << endl;

	preOrder(root->left);
	preOrder(root->right);
}

void postOrder(struct node* root)
{
	if(root == NULL)
		return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << endl;

}