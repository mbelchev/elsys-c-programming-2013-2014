#include <stdio.h>

long fact(int n);

int main(){
        int i, n;
        float sum = 0;
        scanf("%d", &n);
        if(n >= 0 && n <= 20){
                for(i=1; i <= n; i++){
                        sum +=1.0/fact(i);
                }
        	printf("%f", sum);
        } else {
                printf("error");
        }
        return 0;
}

long fact(int n){
	if (n==0){
		return 1;
	} else {
		return n * fact(n-1);
	}
}
