#include <stdio.h>
#include <string.h>

int main(){
	char input[105];
	int total;
	int banyak;
	
	scanf("%d",&banyak);
	for(int i =0; i < banyak;i++){
		scanf("%s",input);
		total = strlen(input);
		if(total > 10){
			printf("%c%d%c\n",input[0],total-2,input[total-1]);
		}
		else{
			printf("%s\n",input);
		}

	}
	
}
