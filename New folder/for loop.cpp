#include <stdio.h>
int main(){
	int n, m;
	printf("Input two interger:");
	scanf("%d %d", &n, &m);
if (n <= m) {
        for (int i = n; i <= m; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = n; i >= m; i--) {
            printf("%d", i);
        }
    }
	return 0;
}
