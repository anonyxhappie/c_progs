#include<stdio.h>

struct node {
	int data;
	struct node * next;
} * head = NULL;
typedef struct node ln;

#define MAX 10
int top=-1;
int a[10];
void lpush(int item);
int lpop();
int main(){
	lpush(1);
	lpush(2);
	lpush(3);
	lpush(4);
	ln * t = head;
//	printf("%d %d\n", t->next->data, t->next->next->data);
	printf("%d\n", lpop());
	printf("%d\n", lpop());
	printf("%d\n", lpop());
	return 0;
}

void lpush(int item){
	ln *tp, * t = head, * nn = (ln *)malloc(sizeof(ln));
	nn->data = item;
	nn->next = NULL;
	if(head == NULL){
		head = nn;
		return;
	}
	printf("b");
	while(t != NULL){
		tp = t;
		printf("c");
		t = t->next;
	} 
	tp = nn;
	printf("f");
}

int lpop(){
	ln *ttp, *tp, * t = head;
	if(head == NULL) return -999;
	while(t != NULL){
		tp = t;
		t = t->next;	
	} 
	//tp->next = NULL;
	return tp->data;
}

void push(int item) {
	if(top==MAX) return;
	top++;
	a[top] = item;  
}

int pop(){
	if(top==-1) return -999;
	return a[top--];
}







