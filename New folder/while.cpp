#include <stdio.h>
int main(){
	int n, i =1;
	printf("Input an integer:");
	scanf("%d", &n);
	while (i <= n){
		printf("%d %d\n", i, n - i + 1);
		i++;
	}
	return 0;
}
