#include <stdio.h>
int main(){
	int n, i;
	char choice;
	
	do{
		printf("Input an integer:");
		scanf("%d", &n);
		
		if ( n >= 1 && n <= 26){
			printf("Letter:");
		
		
		for (i=0; i<n; i++){
			printf("%c", 'A' + i);
		}
	}else{
		printf("Invalid number\n");
	}
	printf("Continue <y/n>:");
	scanf("%c\n", &choice);
	
	if( choice == 'y' || choice == 'Y'){
		continue;
	} else if( choice == 'n' || choice == 'N'){
		printf("Exit\n");
		break;
	}else{
		printf("Invalid character");
	}
	
	}while(1);
	
	return 0;
}
