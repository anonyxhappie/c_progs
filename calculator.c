#include<stdio.h>
main(){
	int a, b;
	char ch;
	while(1){
		printf("Debasis 1st no. dede :");
		scanf("%d", &a);
		printf("Debasis 2nd no. bhi dede :");
		scanf("%d", &b);
		printf("Kya krna h bhai??:(+, -, *, /):");
		fflush(stdin);
		scanf("%c", &ch);
		switch(ch){
			case '+':
				printf("%d\n", a+b);
				break;
			case '-':
				printf("%d\n", a-b);
				break;
			case '*':
				printf("%d\n", a*b);
				break;
			case '/':
				printf("%.2f\n", (float)a/b);
				break;
			default:
				printf("Error!!");		
		}		
	}
}




