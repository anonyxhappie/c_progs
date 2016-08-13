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
	//build_tree(&root, 10);
	insert(&root, 9);
    insert(&root, 4);
    insert(&root, 15);
    insert(&root, 6);
    insert(&root, 12);
    insert(&root, 17);
    insert(&root, 2);

	printf("\nPreorder:\t");
	preorder(root);
	printf("\nInorder:\t");
	inorder(root);
	printf("\nPostorder:\t");
	postorder(root);
	int data = 6;
	printf("\nSearch:\t\t ");
	if(search(root, data)){
		printf("%d Found.\n", data);
	}else{
		printf("%d Not Found.\n", data);
	}
	delete_t(root);
	printf("\nSearch:\t\t ");
	if(search(root, data)){
		printf("%d Found.\n", data);
	}else{
		printf("%d Not Found.\n", data);
	}
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

int search(TNODE * tree, int data){
	if(!tree) return 0;
	else if(tree->data == data) return 1;
	else if(tree->data > data) search(tree->left, data);
	else search(tree->right, data);
}
void delete_t(TNODE * tree){
	if(tree){
		delete_t(tree->left);
		delete_t(tree->right);
		free(tree);	
	}	
}



