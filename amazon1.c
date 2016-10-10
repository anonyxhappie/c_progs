/** By - anonyxhappie
*	Tree Modification -
*		Replace root by sum of its dessedents
*/
#include<stdio.h>
#include<stdlib.h>
struct tnode{
	int data;
	struct tnode * left, * right;
};
typedef struct tnode node;
node * create_node(int item){
	node * nn = (node *) malloc (sizeof(node));
	nn->data = item;
	nn->left = nn->right = NULL;
	return nn;
}
void insert(node ** root, int item){
	if(!*root)
		*root = create_node(item);
	if((*root)->data > item)
		insert(&(*root)->left, item);
	if((*root)->data < item)
		insert(&(*root)->right, item);
}
void preorder(node * tree){
	node * curr = tree;
	if(curr){
		printf("%d ", curr->data);
		preorder(curr->left);
		preorder(curr->right);
	}
}
void inorder(node * tree){
	node * curr = tree;
	if(curr){
		inorder(curr->left);
		printf("%d ", curr->data);
		inorder(curr->right);
	}
}
void dessum(node * tree, int * psum){
	node * subtree = tree;
	if(subtree){
		dessum(subtree->left, psum);
		dessum(subtree->right, psum);
		(*psum) += subtree->data;
	}
}
void dpreorder(node * tree, int * psum){
	node * curr = tree;
	*psum = 0;
	if(curr){
		dessum(curr, psum);
		printf("%d ", *psum - curr->data);
		dpreorder(curr->left, psum);
		dpreorder(curr->right, psum);
	}
}
void dinorder(node * tree, int * psum){
	node * curr = tree;
	*psum = 0;
	if(curr){
		dinorder(curr->left, psum);
		dessum(curr, psum);
		printf("%d ", *psum - curr->data);
		dinorder(curr->right, psum);
	}
}
int main(){
	freopen("in.txt", "r", stdin);
	node * root = NULL;
	int n, i=0, item, sum=0, * psum;
	//STDIN - n, tree elements
	scanf("%d", &n);
	for(;i++<n; 
		scanf("%d", &item), 
		insert(&root, item));
	//STDOUT - tree traversal
	preorder(root); printf("\n");
	inorder(root); printf("\n\n");
	psum = &sum;
	//STDOUT - modified tree traversal
	dpreorder(root, psum); printf("\n");
	dinorder(root, psum); printf("\n"); 
	return 0;
}
