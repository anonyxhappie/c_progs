#include<stdio.h>
#include<string.h>
int main(){
	char str1[10] = "aakansha", str2[10] = "aakansha", stra[10], strb[10];
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
	printf("%s\n%s\n", stra, strb);
	return 0;
}
