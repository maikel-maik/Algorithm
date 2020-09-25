#include <stdio.h>

int main(){
	int banyak;
	int pertama[105];
	int kedua[105];
	int ketiga[105];
	int jumlah1=0;
	int jumlah2=0;
	int jumlah3=0;
	
	scanf("%d",&banyak);
	for(int i=0;i<banyak;i++){
		scanf("%d %d %d",&pertama[i],&kedua[i],&ketiga[i]);
	}
	for(int i=0;i<banyak;i++){
		jumlah1 = jumlah1 + pertama[i];
		jumlah2 = jumlah2 + pertama[i];
		jumlah3 = jumlah3 + pertama[i];
	}
	if(jumlah1 == 0 && jumlah2 == 0 && jumlah3 == 0){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
}
