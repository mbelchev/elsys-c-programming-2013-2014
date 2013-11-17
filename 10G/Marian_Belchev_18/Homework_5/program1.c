#include <stdio.h>
#include <stdlib.h>

int cmpfunc (void const *a, void const *b){
	return ( *(char*)a - *(char*)b );
}

int main(){
	char cards[13];
	scanf("%s", cards);
	
	qsort(cards, 13, sizeof(char), cmpfunc);
	cards[8]	= 'T';
	cards[9]	= 'J';
	cards[10]	= 'Q';
	cards[11]	= 'K';
	cards[12]	= 'A';
		
	printf("%s", cards);
	return 0;
}
