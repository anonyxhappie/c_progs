/* TODO (anonyxhappie#1#): Bahot kuch krna h abhi */
#include<stdio.h>
#include<stdlib.h>

typedef struct cnode{
	char c;
	struct cnode * next;
} cnode;
cnode * head = NULL;
int main(){
	insert_cnn('a');
	insert_cnn('g');
	insert_cnn('d');
	insert_cnn('m');
	display();
	return 0;
}

cnode * create_node(char c){
	cnode * cnn = (cnode *)malloc(sizeof(cnode));
	cnn->c = c;
	cnn->next = NULL;
	return cnn;
}

void insert_cnn(char c){
	cnode *curr = head, * prev = NULL;
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

void display(){
	cnode * curr = head;
	while(curr){
		printf("%c ", curr->c);
		curr = curr->next;
	}	
}




