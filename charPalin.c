/* TODO (anonyxhappie#1#): Bahot kuch krna h abhi */
#include<stdio.h>
#include<stdlib.h>

typedef struct cnode{
	char c;
	struct cnode * next;
} cnode;
int main(){
	cnode * ll = NULL;
	insert_cnn(&ll, 'a');
	insert_cnn(&ll, 'g');
	insert_cnn(&ll, 'd');
	insert_cnn(&ll, 'm');
	printf("jkj");
	display(ll);
	return 0;
}

cnode * create_node(char c){
	cnode * cnn = (cnode *)malloc(sizeof(cnode));
	cnn->c = c;
	cnn->next = NULL;
	return cnn;
}

void insert_cnn(cnode ** ll, char c){
	cnode *curr = *ll, * prev = NULL;
	if (curr == NULL) { // if list empty
        curr = create_node(c);
    } else {
		while(curr){
			prev = curr;
			curr = curr->next;
		} 
		prev->next = create_node(c);
	}
}

void display(cnode * ll){
	cnode * curr = ll;
	while(curr){
		printf("%c ", curr->c);
		curr = curr->next;
	}	
}
