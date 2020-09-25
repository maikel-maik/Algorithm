#include <stdio.h>
#include <string.h>

int main(){
	char nama[105];
	int sama;
	int count;
	
	scanf("%s",nama);
	count=0;
	for(int i=0;i<strlen(nama);i++){
		sama =0;
		for(int j=i;j>=-1;j--){
			if(nama[j]==nama[i]){
				sama = sama + 1;
			}
		}
		if(sama == 1){
			count = count + 1;
		}
	}
	
	if(count%2==0){
		printf("CHAT WITH HER!");
	}
	else{
		printf("IGNORE HIM!");
	}
}
