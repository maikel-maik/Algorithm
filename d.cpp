#include <stdio.h>

int main(){
	int banyak;
	int lolos;
	int nilai[100];
	int total;
	
	scanf("%d %d",&banyak, &lolos);
	for(int i=0;i<banyak;i++){
		scanf("%d",&nilai[i]);
	}
	total =0;
		if(nilai[0]==0){
			total =0;
		}
		else{
			for(int i=0;i<banyak;i++){
				if(nilai[i]>=nilai[lolos-1] && nilai[i]!= 0){
					total=total+1;
				}
		}
	}
	printf("%d",total);
}

