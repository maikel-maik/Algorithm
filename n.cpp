#include <stdio.h>
#include <string.h>

int main(){
	char input[105];
	int danger;
	
	scanf("%s",input);
	danger =0;
	for(int i=0;i<strlen(input);i++){
		if(input[i]==input[i+1]){
			danger = danger+1;
		}
	}
	if(danger>=7){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
