#include <stdio.h>

void _1_50evennumbers();
void _2_table();
void _3_factorial();
void _4_prime();
void _5_squareroot();
void _6_xpowy();
void _7_sumofdigits();
void _8_armstrong();
void _9_reverse();
void _10_palindrome();
void _11_sumofn();
void _12_sumofnp();
void _13_fibonacci();

int main(){
	//_1_50evennumbers();
	//_2_table();
	//_3_factorial();
	//_4_prime();
	//_5_squareroot();
	//_6_xpowy();
	//_7_sumofdigits();
	//_8_armstrong();
	//_9_reverse();
	//_10_palindrome();
	//_11_sumofn();
	//_12_sumofnp();
	_13_fibonacci();
	return 0;
}

void _1_50evennumbers(){
	int i;
	for(i = 2; i <= 100; i+=2) printf("%d ", i);	
}

void _2_table(){
	int i, n;
	printf("Enter number : ");
	scanf("%d", &n);
	for(i = 1; i <= 10; i++) printf("%d * %d = %d\n", n, i, n*i);
}

void _3_factorial(){
	int i, n, t;
	printf("Enter number : ");
	scanf("%d", &n);
	t = n;
	for(i = 1; i < n; i++) t = t * i;
	printf("Factorial of %d is %d.\n", n, t);	
}

void _4_prime(){
	int i = 2, n;
	printf("Enter number : ");
	scanf("%d", &n);
	while(i < n)
		if(!(n % i++)){
			printf("Not Prime.");
			return;
		}
	printf("Prime.");	
}

void _5_squareroot(){
	int i = 1, a, n;
	printf("Enter number : ");
	scanf("%d", &n);
	while((a = i*i) <= n){
		if(a == n){
			printf("Square root of %d is %d.", n, i);
			return;
		}
	i++;
	}
	printf("%d is not a perfect sqaure.", n);	
}

void _6_xpowy(){
	int i = 1, x, y, e = 1;
	printf("Enter x : ");
	scanf("%d", &x);
	printf("Enter y : ");
	scanf("%d", &y);
	while(i++ <= y) e *= x;
	printf("%d power %d is %d.", x, y, e);	
}

void _7_sumofdigits(){
	int n, t, r, s = 0;
	printf("Enter number : ");
	scanf("%d", &n);
	t = n;
	while(t){
		r = t % 10;
		s += r;
		t /= 10;	
	}
	printf("Sum of digits of %d is %d.", n, s);	
}

void _8_armstrong(){
	int n, t, r, s = 0;
	printf("Enter number : ");
	scanf("%d", &n);
	t = n;
	while(t){
		r = t % 10;
		s += r * r * r;
		t /= 10;	
	}
	if(s == n)
		printf("%d is an armstrong number.", n);	
	else
		printf("%d is not an armstrong number.", n);
}

void _9_reverse(){
	int n, t, s = 0;
	printf("Enter number : ");
	scanf("%d", &n);
	t = n;
	while(t){
		s = s * 10 + t % 10;
		t /= 10;	
	}
	printf("Reverse of %d is %d.", n, s);
}

void _10_palindrome(){
	int n, t, s = 0;
	printf("Enter number : ");
	scanf("%d", &n);
	t = n;
	while(t){
		s = s * 10 + t % 10;
		t /= 10;	
	}
	if(n==s)
		printf("%d is a palindrome.", n);
	else
		printf("%d is not a palindrome.", n);
}

void _11_sumofn(){
	int n, i = 1, sum = 0;
	printf("Enter number : ");
	scanf("%d", &n);
	while(i <= n) sum += i++;
	printf("Sum of %d numbers is %d.", n, sum);
}

void _12_sumofnp(){
	int n, i = 1, sum = 0;
	printf("Enter number : ");
	scanf("%d", &n);
	while(i <= n){
		printf("%d + ", i);
		sum += i++;	
	} 
	printf("\b\b= %d.", sum);
}

void _13_fibonacci(){
	int n, i = -1, j = 1, k, l = 1;
	printf("Enter number : ");
	scanf("%d", &n);
	while(l++ <= n){
		k = j + i;
		i = j;
		j = k;
		printf("%d ", j);
	}
}



