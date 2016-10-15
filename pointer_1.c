main(){
	int a = 50;
	int *p = &a;
	xyz(&p);
	printf("%d\n", *p);
	printf("%d\n", *p);
	printf("%d\n", *p);
	printf("%d\n", *p);
}
xyz(int **q){
	int a = 30;
	*q = &a;
}
