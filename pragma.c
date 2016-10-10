#include<stdio.h>
void india();
void usa() ;
#pragma startup india 105
#pragma startup usa
#pragma exit usa
#pragma exit india 105

void main(){
printf("\nI am in main");
getch();
}

void india(){
printf("\nI am in india");
getch();
}

void usa(){
printf("\nI am in usa");
getch();
}


