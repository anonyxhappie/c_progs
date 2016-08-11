#include<stdio.h>
#include<stdlib.h>

struct tnode{
	struct tnode * left;
	int data;
	struct tnode * right;
};
typedef struct tnode TNODE;

void insert(TNODE *, int);
void buildTree(TNODE *, int);
void inorder(TNODE *);

/*

root-->x---->[]
x->data
root->
*/

int main(){
	TNODE * root = NULL;
	//insert(root, 4);
	buildTree(root, 10);
	inorder(root);
	return 0;
}

void insert(TNODE * traverse, int item){
	TNODE * newnode = (TNODE *)malloc(sizeof(TNODE));
	
	newnode->left = NULL;
	newnode->data = item;
	newnode->right = NULL;
	if(traverse == NULL)
			traverse = newnode;
	else
		if(item == traverse->data)
			printf("Item Already Existing.\n");
		else if(item < traverse->data)
			insert(traverse->left, item);	
		else
			insert(traverse->right, item);
}

void buildTree(TNODE * traverse, int len){
	int i;
	for(i=1; i<=10; i++) insert(traverse, i);	
}

void inorder(TNODE * traverse){
	if(traverse){
		inorder(traverse->left);
		printf(" %d j", traverse->data);
		inorder(traverse->right);	
	}	
}










