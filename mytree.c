#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
struct tnode{
	struct tnode * left, * right;
	int data;
};
typedef struct tnode TNODE;
int main(){	
	TNODE ** root = NULL;
	//insert(&root, 6);
	build_tree(&root, 10);
	printf("\nPreorder:");
	//preorder(root);
	printf("\nInorder:");
	//inorder(root);
	printf("\nPostorder:");
	postorder(root);
	//int f = search(TNODE *, int);
	//f = delete_tn(TNODE *, int);
	return 0;
}

TNODE * create_node(int data){
	TNODE * nn = (TNODE *)malloc(sizeof(TNODE));
	nn->left = nn->right = NULL;
	nn->data = data;
	return nn;
}
void insert(TNODE ** tree, int data){
	if(!(*tree)){
		*tree = create_node(data);
		return;
	}
	if(data < (*tree)->data)
		insert(&(*tree)->left, data);
	else if(data > (*tree)->data)
		insert(&(*tree)->right, data);
}
void build_tree(TNODE ** tree, int limit){
	int i;
	for(i=limit; i>0; i--) insert(&tree, i);
}
void preorder(TNODE * tree){
	if(tree){
		printf(" %d ", tree->data);
		preorder(tree->left);
		preorder(tree->right);
	}		
}
void inorder(TNODE * tree){
	if(tree){
		inorder(tree->left);
		printf(" %d ", tree->data);
		inorder(tree->right);
	}	
}
void postorder(TNODE * tree){
	if(tree){
		postorder(tree->left);
		postorder(tree->right);
		printf(" %d ", tree->data);
	}	
}
/*
int search(TNODE ** tree, int data){

	return 1;	
}
int delete_tn(TNODE ** tree, int data){

	return 1;	
}
*/




