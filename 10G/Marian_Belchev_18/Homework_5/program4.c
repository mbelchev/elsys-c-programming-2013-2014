#include <stdio.h>

int main(){
	int m, m1, m2, m5, x = 0, y = 0, z = 0, i;
	scanf ("%d %d %d %d", &m1, &m2, &m5, &m);	
	while (m>=5 && z<m5){
       		m-=5;
        	z+=1;
	}
	while (m>=2 && y<m2){
        	m-=2;
        	y+=1;
	}
	while (m>=1 && x<m1){
        	m-=1;
        	x+=1;
	}
	if (m==0){
		printf("Yes: %d, %d, %d", x, y, z);
	} else {
		printf("No");
	}
	return 0;
}
