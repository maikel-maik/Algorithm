#include<stdio.h>
#include<string.h>

int main(){
	int banyak;
	char input[105];
	int	count[105];
	
	scanf("%d",&banyak);
	scanf("%s",input);
	int ulang=0;
	for(int i=0;i<strlen(input);i++){
		count[i]=0;
		if(input[i]==1){
			ulang++;
			for(int j=i;j<strlen(input);j++){
				if(input[i]==0){
					count[i]=count[i]+1;
				}else{
					break;
				}
			}	
		}
	}
	int berhasil =0;
	for(int i=0;i<ulang;i++){
		if(count[i]==count[i+1]){
			berhasil++;
		}
		else{
			break;
		}
	}
	if(berhasil == ulang){
		printf("YES");
	}else{
		printf("NO");
	}
	
}
