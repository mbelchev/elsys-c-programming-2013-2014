#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    float arr[n][n], sum = 0;
    if (n<=100 && n>0){
            for (i=1; i<=n; i++){
                    for (j=1; j<=n; j++){
                            scanf("%f", &arr[i][j]);
                    }
            }
           for (i=1; i<=n; i++){
                    for (j=1; j<=n; j++){
                            if (i<j){
                                    sum=sum+arr[i][j];
                            }
                    }
            }
            printf("%f", sum);
    } else {
            printf ("error");
    }
    return 0;
}
