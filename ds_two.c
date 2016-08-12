#include<stdio.h>
#include<stdlib.h>

struct tnode{
	struct tnode * left;
	int data;
	struct tnode * right;
};
typedef struct tnode TNODE;

TNODE * insert(TNODE *, int);
TNODE * buildTree(TNODE *, int);
void inorder(TNODE *);

int main(){
	TNODE * root = NULL;
	//root = buildTree(root, 10);
	root = insert(root, 9);
    root = insert(root, 4);
    root = insert(root, 15);
    root = insert(root, 6);
    root = insert(root, 12);
    root = insert(root, 17);
    root = insert(root, 2);

	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
	return 0;
}

TNODE * insert(TNODE * tree, int item){
	TNODE * nn = NULL;
	if(!tree){
		nn = (TNODE *)malloc(sizeof(TNODE));
		nn->left = nn->right = NULL;
		nn->data = item;
		tree = nn;
	}
	if(item > tree->data){
		tree->right = insert(tree->right, item);
	} else if(item < tree->data){
		tree->left = insert(tree->left, item);
	}
	return tree;
}

TNODE * buildTree(TNODE * root, int len){
	int i;
	for(i=10; i>0; i--) root = insert(root, i);	
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










