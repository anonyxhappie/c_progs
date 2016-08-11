#include<stdio.h>
struct cricket{
	char country_name[50];
	char player_name[50];
	float batting_avg;
};

int main(){
	int i, j;
	struct cricket record[10];
	for(i=0; i<5; i++){
		printf("Enter country name: ");
		gets(record[i].country_name);
		printf("Enter player name: ");
		gets(record[i].player_name);
		printf("Enter score: ");
		scanf("%f", &record[i].batting_avg);
	}                               
	for(i=0; i<5; i++){
		printf("\n%s \t %s \t %.2f", record[i].country_name, record[i].player_name, record[i].batting_avg);
	}
	return 0;	
}
