#include <stdio.h>

int main(){
	int harga;
	int duit;
	int pisang;
	int bayar;
	int pinjam;
	
	scanf("%d %d %d",&harga,&duit,&pisang);
	bayar = 0;
	for(int i=1;i<=pisang;i++){
		bayar = bayar + (harga*i);
	}
	pinjam = bayar - duit;
	if(pinjam > 0){
		printf("%d",pinjam);
	}
	else{
		printf("0");
	}
}
