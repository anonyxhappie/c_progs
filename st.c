#include<stdio.h>
#include<stdlib.h>

typedef struct st {
	int (*myfunx)();
	char * c;
	void * v;
	int vs;
}h;

int foo(){
	printf("gvj");
	return 0;
}

h H(){
	struct st s;
	s.myfunx = &foo;
	return s;
}


int main(){
	h s = H();
	printf("%s", s.myfunx());
	return 0;
}

