#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char input[105];
	int jumlah;
	
	scanf("%s", input);
	jumlah=strlen(input);
	for(int i=0;i<jumlah;i++){
		if(input[i] != 'A' && input[i] != 'a' && input[i] != 'O' && input[i] != 'o' && input[i] != 'Y'&& input[i] != 'y' && input[i] != 'E' && input[i] != 'e' && input[i] != 'U' && input[i] != 'u'&& input[i] != 'I' && input[i] != 'i'){
			printf(".%c",tolower(input[i]));
		}
	}
	
}
