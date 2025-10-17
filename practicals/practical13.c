#include <stdio.h>
int main() {
    int i, j,n;
    printf("enter the no. of tables you want");
    scanf("%d",&n);
    printf(" 1\t 2\t 3\t 4\t 5\n");
    printf("---------------------------------\n");
    for(i = 1; i <= 10; i++){
        for(j = 1; j <= n; j++) {
            printf("%2d x %2d = %2d\t", j, i, j * i);
        }
        printf("\n");
    }
return 0;
}