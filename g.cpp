#include <stdio.h>

int main(){
	int banyak;
	int petya[1005];
	int vasya[1005];
	int tonya[1005];
	int yakin;
	int solusi;
	
	scanf("%d",&banyak);
	for(int i =0 ;i<banyak;i++){
		scanf("%d %d %d",&petya[i],&vasya[i],&tonya[i]);
	}
	solusi = 0;
	for(int i =0 ;i<banyak;i++){
		yakin = 0;
		if(petya[i]==1){
			yakin = yakin + 1;
		}
		if(vasya[i]==1){
			yakin = yakin + 1;
		}
		if(tonya[i]==1){
			yakin = yakin + 1;
		}
		if(yakin > 1){
			solusi = solusi + 1;
		}
	}
	printf("%d",solusi);
	
}
