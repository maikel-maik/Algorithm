#include <stdio.h>

int main(){
	int input;
	int total;
	
	
	scanf("%d",&input);
	total =0;
	for(int i=1;i<=input/2;i++){
		if(i % 2 ==0){
			total = total + i;
		}else{
			total = total - i;
 	}
	}
	printf("%d",total);
	
}
