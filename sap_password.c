#include<string.h>
main(){
	int input1 = 2;
	char *input2[]={"abcd", "dcab"};
	printf("%d\n", sapPass(input1, input2));
}

int sapPass(int input1, char *input2[]){
	struct map{
		char key;
		int value;
	};
	int i, j, k, flag, count=1;
	struct map inpOdd[input1][26], inpEven[input1][26];
	for(i=0; i<input1; i++){
		for(j=0; j<26; j++){
			inpOdd[i][j].key = j+97; inpOdd[i][j].value = 0;
			inpEven[i][j].key = j+97; inpEven[i][j].value = 0;
		}
		for(j=0; j<strlen(input2[i]); j++){
		    if(j%2==0) inpEven[i][input2[i][j]-97].value++;
		    else inpOdd[i][input2[i][j]-97].value++;
		}
		printf("%s %s\n Odd Even\n", input2[0], input2[1]);
		for(j=0; j<26; j++){
			if(inpOdd[i][j].value==0 && inpEven[i][j].value==0) continue;
			printf("%c -> %d : %d\n", inpOdd[i][j].key, inpOdd[i][j].value, inpEven[i][j].value);
		}
	}
	for(i=0; i<input1; i++){
		for(j=i+1; j<input1; j++){
			flag = 1;
			for(k=0; k<26; k++){
				//printf("\n%d %d", inpOdd[i][k].value - inpOdd[j][k].value, inpEven[i][k].value - inpEven[j][k].value);
				if(((inpOdd[i][k].value - inpOdd[j][k].value)!=0)||((inpEven[i][k].value - inpEven[j][k].value)!=0)){
					flag = 0; break;
				}
			}
			if(flag) count++;
		}
	}
	return count;
}
