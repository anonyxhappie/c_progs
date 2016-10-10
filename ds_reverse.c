#include <stdio.h>
#include <stdlib.h>
void createNode(int);
void displayList();
void displaybist(int);
void createList(int);
int linkedListLength();

struct node{
	int data;
	struct node * next;
} * START = NULL, * trav;
struct node * trav = START;

int main(){
	createList(6);
	displayList();
	displaybist(77);
	return 0;
}

void createNode(int item){
	struct node * newnode = (struct node *)malloc(sizeof(struct node)), * traverse = START;
	newnode->data = item;
	newnode->next = NULL; 
	if(START == NULL) START = newnode;
	else{
		while(traverse->next != NULL) traverse = traverse->next;
		traverse->next = newnode;	
	}
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

void displaybist(int item){
	/*if(START == NULL){
		printf("Linked list empty.\n");
		return;
	}*/static int i = 5;
//	struct node * trav = START;
	if(i--){//traverse->next != NULL){
		trav = trav->next;
		displaybist(trav->data);
		getch();
		printf("[ %d ]-->", item);
	}
	printf("NULL\n");
}

void createList(int n){
	int i;
	for(i = 1; i <=n; i++) createNode(i);
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














