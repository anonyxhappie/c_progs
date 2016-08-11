#include <stdio.h>
#include <stdlib.h>
void createNode(int);
void displayList();
void displaybist();
void createList(int);
int linkedListLength();
void reverse();
void revel();
void rdisplaylist();
void rev();
void reversenode(int);
void mid();

struct node{
	int data;
	struct node * next;
} * START = NULL, * END = NULL, * HEAD = NULL;

int main(){
	createList(6);
	//displayList();
	//displaybist();
	//revel();
	//rdisplaylist();
	//reverse();
	//rev();
	//mid();
	Rreverse();
	displayList();
	return 0;
}

void createNode(int item){
	struct node * newnode = (struct node *)malloc(sizeof(struct node)), 
	* traverse = START;
	newnode->data = item;
	newnode->next = NULL; 
	if(START == NULL) START = newnode;
	else{
		while(traverse->next != NULL) traverse = traverse->next;
		traverse->next = newnode;	
	}
	return;
}

void displayList(){
	struct node * traverse = START;
	if(START == NULL){
		printf("Linked list empty.\n");
		return;
	}
	printf("[ %d ]-->", traverse->data);
	while(traverse->next != NULL){
		traverse = traverse->next;
		printf("[ %d ]-->", traverse->data);
	}
	printf("NULL\n");
}

void Rreverse(){
	struct node * traverse = START, * previous = NULL, * nnext;
	while(traverse != NULL){
		nnext = traverse->next;
		traverse->next = previous;
		previous = traverse;
		traverse = nnext;
	}
	START = previous;
}


void createList(int n){
	int i;
	struct node * traverse = START;
	for(i = 1; i <= n; i++){
		createNode(i);
		//if(i%2 != 0)	traverse = traverse->next; 
	}
	return;
}

void mid(){
	struct node * traverse = START, * dtraverse = START;
	if(START==NULL){
		printf("Linked list empty.\n");
		return;
	}
	
	while(dtraverse->next != NULL){
		dtraverse = dtraverse->next;
		
		printf("[ %d ]-->", traverse->data);
		traverse = traverse->next;
		
		if(dtraverse->next == NULL) continue; 
		dtraverse = dtraverse->next;
	} 
	printf("Next Node.\n");
}

void displaybist(){
	struct node * traverse = START;
	static int len = 6;
	if(START == NULL){
		printf("Linked list empty.\n");
		return;
	}
	printf("[ %d ]-->", traverse->data);
	if(traverse->next != NULL){
		traverse = traverse->next;
		displaybist();
		printf("[ %d ]-->", traverse->data);
	}
	printf("NULL\n");
}

//creates a node reversely
void reversenode(int item){
	struct node * newnode = (struct node *)malloc(sizeof(struct node));
	if(END == NULL) newnode->next = START;
	else newnode->next = END;
	newnode->data = item;
	END = newnode;
}

//creates the whole list reversely using reversenode()
void revel(){
	struct node * traverse = START;
	if(START == NULL){
		printf("Linked list empty.\n");
		return;
	}else{
		while(traverse->next != NULL){
			reversenode(traverse->data);
			traverse = traverse->next;
		}
		reversenode(traverse->data);
	}
}

//displays reverselist
void rdisplaylist(){

	struct node * traverse = END;
	if(END == NULL){
		printf("Linked list empty.\n");
		return;
	}
	printf("END--->");
	while(traverse->next != START){
		printf("[ %d ]--->", traverse->data);
		traverse = traverse->next;
	}
	printf("[ %d ]--->START\n", traverse->data);
}

int linkedListLength(){
	struct node * traverse = START;
	int count = 1;
	if(START == NULL) return 0;
	while(traverse->next != NULL){
		traverse = traverse->next;
		count++;
	}
	return count;
}
	
	
void reverse(){
	struct node * traverse;
	int t, len = linkedListLength();
	if(START == NULL){
		printf("Linked list empty.\n");
		return;
	}
	while(len--){
		t = len;
		traverse = START;
		while(t--) traverse = traverse->next;
		printf("[ %d ]-->", traverse->data);
	}
	printf("NULL\n");
}



void rev(){
	struct node * traverse, * temp;
	int len = linkedListLength();
	if(START == NULL){
		printf("Linked list empty.\n");
		return;
	}
	while(len--){
		traverse = START;
		while(traverse->next != NULL){
			temp = traverse;
			traverse = traverse->next;	
		} 
		printf("[ %d ]-->", traverse->data);
		temp->next = NULL;
	}
	printf("NULL\n");
}

















