#include <stdio.h>
 
int main(){
	char number[10];
	int i = 0, count[10] = {0};
	scanf("%s", &number);
	while (number[i]){
		count[number[i]-'0']++;
		i++;
	}
	for (i=0; i<10; i++ ){
		if(count[i] > 1){
			printf("%d : %d\n", i, count[i]);
		}
	}
	return 0;
}
