#include <stdio.h>

int main(){
	int a,b,c;
	int hasil=0;
	int temp=0;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	hasil = a+b*c;
	temp = a*(b+c);
	if(hasil>temp){
		temp = a*b*c;
		if(hasil > temp){
			temp = (a+b)*c;
			if(hasil> temp){
				printf("%d",hasil);
			}
			else{
				printf("%d",temp);
			}
		}
		else{
			hasil = (a+b)*c;
			if(hasil> temp){
				printf("%d",hasil);
			}
			else{
				printf("%d",temp);
			}
		}
	}
	else{
		hasil = a*b*c;
		if(hasil > temp){
			temp = (a+b)*c;
			if(hasil> temp){
				printf("%d",hasil);
			}
			else{
				printf("%d",temp);
			}
		}
		else{
			hasil = (a+b)*c;
			if(hasil> temp){
				printf("%d",hasil);
			}
			else{
				printf("%d",temp);
			}
		}
	}
	
}
