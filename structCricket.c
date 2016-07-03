/**
 * Created by anonyxhappie on 03-07-2016.
 */
/**
 *	Create a structure cricket consisting of 3 data elements as 
 *	countryName[50], playerName[50], battingAverage(float)
 *	Input the details of 50 players and obtain the following task.
 *	The order of input is 
 *	country, player, average
 *	Sachin Tendulkar under India already exist.
 *
 *	Case 1. Should get the report as follows---
 *	S.no.	Country		No. of Players(decending order)
 *
 *	Case 2. Display 25 counries name
 	Press any key -> display 50 countries name
 *  	Backspace -> 25 countries
 *  
 *  	Case 3. Display record as---
 *  	S.no.	Country(alphabatical order)		Player name		Batting Average
 */
void inputRecord();
void recordDisplay();
int ifExist(int);
void playerCountf();
void sortCpr();
void swapInt(int, int);
void swapString(int, int);
void displayAlpha();
void stringAlphaSort();
void stringCompare(int, int);
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int n = 50, k, cpr_max_limit;  //global variables
struct cricket{
	char countryName[50];
	char playerName[50];
	float battingAverage;
}record[50];
struct countryPlayer{
	char countryName[50];
	int playerCount;
}cpr[50];

int main(){
	int i, choice;
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

        printf("\nEnter your choice(1,2,3)\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				 playerCountf();
				 printf("\nS.No.\tCountry\tPlayers");
				 sortCpr();
				 getch();
				 system("clear");
				 break;
		 	case 2:
				 printf("\nCountries...\n");
				 for(i=0; i<n/2; i++){
				 	printf("%s\n", record[i].countryName);
				 	if(i == 24){
				 		printf("\nPress any key for more.");
				 		getch();
				 		n*=2;
					 }
				    if(i == 49){
				    	if(getch() == '\b')	i = 0; 
						else break;
					}
				 }
				 getch();
    	         system("clear");
			 	 break;
			case 3:
				 printf("\nCountry\n");
                 playerCountf();
                 displayAlpha();
				 getch();
  		         system("clear");
				 break;
			default:	 
				 printf("\nEnter correct choice.\n");
		}

	return 0;
}

void inputRecord(){
	//get user input
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

void recordDisplay(){
	//display the simple record
	int i;
	printf("\n");
	for(i=0; i<n; i++){
		printf("\n\tPlayer name: %s\t", record[i].playerName);
		printf("Country name: %s\t", record[i].countryName);
		printf("Batting average: %.2f\n", record[i].battingAverage);
	}
}

/*------Functions for Case 1 starts from here-----*/
int ifExist(int i){
	int j;
	for(j=0; j<i; j++)
	 	if(strcmp(record[i].countryName, record[j].countryName) == 0)
	 		return 1;
	return 0;
}

void playerCountf(){
	//counts the number of players in each country
	int i, j;
	k=0;
	for(i=0; i<n; i++){
	    if(ifExist(i)) continue;
	 	strcpy(cpr[k].countryName, record[i].countryName);
		for(j=i; j<n; j++)
			if(strcmp(cpr[k].countryName, record[j].countryName) == 0)
				cpr[k].playerCount++;
        k++;
	}
	cpr_max_limit = k;
	return;
}

/*In progress...*/
void sortCpr(){
	//this function is for displaying the cpr record 
	//in decending order of players in each country
	 int i, j;
	 for(i=0; i<cpr_max_limit; i++){
	        for(j=i+1; j<=cpr_max_limit; j++){
                if(j==cpr_max_limit) break;
                if(cpr[j].playerCount > cpr[i].playerCount){
                    swapInt(i, j);
 			        swapString(i, j);
                }
            }
     		printf("\n%d.\t%s\t%d\n",i+1 , cpr[i].countryName, cpr[i].playerCount);
	 }
	 return;
}

void swapInt(int i, int j){
	//this function is to swap two numbers
	int temp;
	temp = cpr[i].playerCount;
	cpr[i].playerCount = cpr[j].playerCount;
	cpr[j].playerCount = temp;
	return;
}

void swapString(int i, int j){
	//this function is to swap two strings
	char * c;
	strcpy(c, cpr[i].countryName);
	strcpy(cpr[i].countryName, cpr[j].countryName);
	strcpy(cpr[j].countryName, c);
	return;
}
/*------Functions for Case 1 end here-----*/

/*------Functions for Case 3 starts from here-----*/
void displayAlpha(){
	//this function is to display the record in tabular form
	//Note: countries should be in alphabatical order
	int i;
	stringAlphaSort();
    for(i=0; i<=cpr_max_limit; i++){
        printf("\n%s", cpr[i].countryName);
    }
	return;
}

void stringAlphaSort(){
    int i, j;
    for(i=0; i<=cpr_max_limit; i++){
		for(j=i+1; j<=cpr_max_limit; j++){
			stringCompare(i, j);
		}
	}
}

void stringCompare(int x, int y){
    char str1[50], str2[50], stra[50], strb[50];
    strcpy(str1, cpr[x].countryName);
    strcpy(str2, cpr[y].countryName);
    int i, len;
	if(strlen(str1) > strlen(str2)){
	    len = strlen(str2);
        strcpy(stra, str2);
        strcpy(strb, str1);
    } else{
        len = strlen(str1);
        strcpy(stra, str1);
        strcpy(strb, str2);
    }
	for(i=0; i<len; i++){
		if(str1[i] < str2[i]){
             strcpy(stra, str1);
             strcpy(strb, str2);
             break;
		}else if(str2[i] < str1[i]){
             strcpy(stra, str2);
             strcpy(strb, str1);
             break;
        }
	}
	strcpy(cpr[x].countryName, stra);
	strcpy(cpr[y].countryName, strb);
    return;
}
/*------Functions for Case 3 end here-----*/











