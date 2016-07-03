#include <stdio.h>
#include<string.h>
int n = 10, k, cpr_max_limit;
struct cricket{
	char countryName[50];
	char playerName[50];
	float battingAverage;
}record[10];

struct countryPlayer{
	char countryName[50];
	int playerCount;
}cpr[10];

int main(){
	int i;
	strcpy(record[0].playerName, "Sachin");
	strcpy(record[0].countryName, "India");
	record[0].battingAverage = 43.87;
	printf("\n");
	
	for(i=1; i<n;i+=2){
		strcpy(record[i].playerName, "Watson");
		strcpy(record[i].countryName, "Aus");
		record[i].battingAverage = 43.87;
		strcpy(record[i+1].playerName, "Taylor");
		strcpy(record[i+1].countryName, "NZ");
		record[i+1].battingAverage = 44.25;
		
	
	}
	
	playerCountf();
	cpr_max_limit = k; 
	sortcpr();
	
	printf("\nS.No.\tCountry\tPlayers");
	for(i=0; i<=cpr_max_limit; i++)	printf("\n%d.\t%s\t%d\n",i+1 , cpr[i].countryName, cpr[i].playerCount);
	
	return 0;
}

void input_record(){
	int i;
	for(i=1; i<n; i++){
		printf("\n%d.Enter player name: ", i+1);
		scanf("%s", record[i].playerName);
		printf("  Enter country name: ");
		scanf("%s", record[i].countryName);
		printf("  Enter batting average: ");
		scanf("%f", &record[i].battingAverage);
	} 
}

void record_display(){
	int i;
	printf("\n");
	for(i=0; i<n; i++){
		printf("\n\tPlayer name: %s\t", record[i].playerName);
		printf("Country name: %s\t", record[i].countryName);
		printf("Batting average: %.2f\n", record[i].battingAverage);
	}
}
int ifExist(int i){
	int j;
	for(j=0; j<i; j++){
	 	if(strcmp(record[i].countryName, record[j].countryName) == 0){
	 		return 1;
		 }
    }
	return 0;
}

void playerCountf(){
	int i, j;
	k=0;
	strcpy(cpr[0].countryName, record[0].countryName);
	cpr[0].playerCount = 1;
	for(i=1; i<n; i++){
	    if(ifExist(i)){
	    	continue;
		}
		k++;	
	 	strcpy(cpr[k].countryName, record[i].countryName);		
		for(j=i; j<n; j++){
			if(strcmp(cpr[k].countryName, record[j].countryName) == 0){
				cpr[k].playerCount++;
			}
		}	
	}
	return;
}

void sortcpr(){
	 int i, j;
	 for(i=0; i<cpr_max_limit; i++){
	 	getch();
		   for(j=i+1; j<cpr_max_limit; j++){
			  if(cpr[j].playerCount > cpr[i].playerCount){
				  swapInt(i, j); 
           		  swapString(i, j);
			  }
		   }
	 }
	 return;
}

void swapInt(int i, int j){
	int temp;
	temp = cpr[i].playerCount;
	cpr[i].playerCount = cpr[j].playerCount;
	cpr[j].playerCount = temp;
	return;
}

void swapString(int i, int j){
	char * c;
	strcpy(c, cpr[i].countryName);
	strcpy(cpr[i].countryName, cpr[j].countryName);
	strcpy(cpr[j].countryName, c);
	return;
}












