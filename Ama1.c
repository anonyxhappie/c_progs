#include<stdio.h>

struct node{
  int data;
  struct node * next;
};

void fun(struct node *);
struct node * createNode(struct node *, int);
struct node * createList(struct node *, int);
void displayList(struct node *);

int main(){
	struct node * head = NULL;
	head = createList(head, 4);
	displayList(head);
	fun2(head);
	return 0;
}

void fun(struct node * head){
  if(head == NULL) return;
  fun(head->next);
  printf("%d  ", head->data);
}

void fun2(struct node* head)
{
  if(head == NULL) return;
  printf("%d  ", head->data); 
 
  if(head->next != NULL )
    fun2(head->next->next);
  printf("%d  ", head->data);   
}

struct node * createNode(struct node * head, int item){
	struct node * traverse = head, * newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = item;
	newnode->next = NULL; 
	if(head == NULL) head = newnode;
	else{
		while(traverse->next != NULL) traverse = traverse->next;
		traverse->next = newnode;	
	}
	return head;
}

struct node * createList(struct node * head, int n){
	int i;
	for(i = 1; i <= n; i++) head = createNode(head, i);
	return head;
}


void displayList(struct node * head){
	struct node * traverse = head;
	if(head == NULL) return;
	printf("[ %d ]-->", traverse->data);
	while((traverse = traverse->next) != NULL)
		printf("[ %d ]-->", traverse->data);
}




