#include <stdio.h>

int main(){
	int number;
	scanf("%d", &number);
	if (number > 0 && number <= 99){
			if (number > 10 && number < 20){
				switch (number % 10){
					case 1 : printf("edinadeset"); break;
					case 2 : printf("dvanadeset"); break;
					case 3 : printf("trinadeset"); break;
					case 4 : printf("chetirinadeset"); break;
					case 5 : printf("petnadeset"); break;
					case 6 : printf("sheshtnadeset"); break;
					case 7 : printf("sedemnadeset"); break;
					case 8 : printf("osemnadeset"); break;
					case 9 : printf("devednadeset"); break;
				}	
			} else {
				if (number % 10 == 0){
					switch (number / 10){
						case 1 : printf("deset"); break;
						case 2 : printf("dvadeset"); break;
						case 3 : printf("trideset"); break;
						case 4 : printf("chetirideset"); break;
						case 5 : printf("petdeset"); break;
						case 6 : printf("sheshtdeset"); break;
						case 7 : printf("sedemdeset"); break;
						case 8 : printf("osemdeset"); break;
						case 9 : printf("devedeset"); break;
					}
				} else {
					switch (number / 10){
						case 1 : printf("edinadeset i "); break;
						case 2 : printf("dvadeset i "); break;
						case 3 : printf("trideset i "); break;
						case 4 : printf("chetirideset i "); break;
						case 5 : printf("petdeset i "); break;
						case 6 : printf("sheshtdeset i "); break;
						case 7 : printf("sedemdeset i "); break;
						case 8 : printf("osemdeset i "); break;
						case 9 : printf("devetdeset i "); break;
					}
					switch (number % 10){
						case 1 : printf("edno"); break;
						case 2 : printf("dve"); break;
						case 3 : printf("tri"); break;
						case 4 : printf("chetiri"); break;
						case 5 : printf("pet"); break;
						case 6 : printf("shest"); break;
						case 7 : printf("sedem"); break;
						case 8 : printf("osem"); break;
						case 9 : printf("devet"); break;
					}
				}
			}
		
	} else {
		printf("error");
	}
	return 0;
}
