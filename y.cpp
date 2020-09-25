#include <stdio.h>
#include <string.h>

int main(){
	char input[105];
	char input2[105];
	
	scanf("%s",input);
	scanf("%s",input2);
	int banyak  = strlen(input);
	for(int i=0;i<banyak;i++){
		if(input[i]==input2[i]){
			printf("0");
		}else{
			printf("1");
		}
	}
	
}
