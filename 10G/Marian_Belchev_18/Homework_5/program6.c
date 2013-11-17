#include <stdio.h>

int main(){
	int row, col, n = 4, arr[5][5];
	for (row=1; row<=n; row++){
		for(col=1; col<=n; col++){
			scanf("%d", &arr[row][col]);
		}
	}
	for (row=1; row<=n; row++){
		for(col=1; col<=n; col++){
			printf("%d ", arr[col][row]);
		}
		printf("\n");
	}
	return 0;
}
