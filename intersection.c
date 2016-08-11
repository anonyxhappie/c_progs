#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node * next;
} * L_ONE = NULL, * L_TWO = NULL;

int main(){
	createList(2, 1);
	createList(11, 2);
	displayList(1);
	displayList(2);
	
	printf("\n\n");
	
	intersectionNode(500);
	createList(3, 1);
	
	displayList(1);
	displayList(2);
	//intersection();
	intersectionPoint();
	return 0;
}

void createNode(int item, int ll){
	struct node * newnode = (struct node *)malloc(sizeof(struct node)), * traverse; 
	if(ll == 1) traverse = L_ONE;
	if(ll == 2) traverse = L_TWO;
	
	newnode->data = item;
	newnode->next = NULL; 
	
	if(traverse == NULL){
		if(ll == 1)	L_ONE = newnode;
		if(ll == 2) L_TWO = newnode;
	} 
	else{
		while(traverse->next != NULL) traverse = traverse->next;
		traverse->next = newnode;	
	}
	return;
}

void displayList(int ll){
	struct node * traverse;
	if(ll == 1) traverse = L_ONE;
	if(ll == 2) traverse = L_TWO;
	if(traverse == NULL){
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

void createList(int n, int ll){
	int i;
	if(ll == 1) i = 1;
	if(ll == 2) i = 7;
	for(; i <= n; i++)
		createNode(i, ll); 
	return;
}

void intersectionNode(int item){
	struct node * otraverse = L_ONE, * ttraverse = L_TWO;
	struct node * newnode = (struct node *)malloc(sizeof(struct node)); 
	
	newnode->data = item;
	newnode->next = NULL; 
	
	while(otraverse->next != NULL) otraverse = otraverse->next;
	while(ttraverse->next != NULL) ttraverse = ttraverse->next;
	otraverse->next = newnode;
	ttraverse->next = newnode;
	return;
}

void intersection(){
	struct node * otraverse = L_ONE, * ttraverse;
	int i, j;
	if(L_ONE == NULL || L_TWO == NULL){
		printf("\nNo intersection.\n");
		return;
	}else{
		while(otraverse->next != NULL){
			ttraverse = L_TWO;
			while(ttraverse->next != NULL){
				if(otraverse->data == ttraverse->data) printf(" [ %d ] ", otraverse->data);
				ttraverse = ttraverse->next;
			}
			otraverse = otraverse->next;
		}
	}
}

void intersectionPoint(){
	struct node * otraverse = L_ONE, * ttraverse = L_TWO;
	int len, flag = 1;
	if(llen(1) > llen(2))	len = llen(1) - llen(2);
	else{
		len = llen(2) - llen(1);
		flag = 0;
	}	
	if(flag) 	while(len--) 	otraverse = otraverse->next;
	else 	 	while(len--) 	ttraverse = ttraverse->next;
	while(otraverse->next != NULL){
		if(otraverse->next == ttraverse->next){
			printf("\n[ %d ]\n", otraverse->next->data);
			return;
		}
		otraverse = otraverse->next;
		ttraverse = ttraverse->next;
	}
}

int llen(int ll){
	struct node * traverse;
	if(ll == 1) traverse = L_ONE;
	if(ll == 2) traverse = L_TWO;
	int count = 1;
	while(traverse->next != NULL){
		traverse = traverse->next;
		count++;
	}
	return count;
}












