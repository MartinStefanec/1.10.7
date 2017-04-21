#include <stdio.h>
#include <time.h>
#include<math.h>

typedef struct{
	float x;
	float y;
}POINT;

typedef struct{
	POINT c;
	float r;
}CIRC;

main(){
	CIRC c1,c2;
	//info o prvej kruznici
	printf("Zadajte suradnice stredu prvej kruznice: \n");
	scanf("%f%f",&c1.c.x,&c1.c.y);
	printf("Zadajte polomer prvej kruznice (kladne cislo): \n"); 
	scanf("%f",&c1.r);
	while(c1.r<=0) {
		printf("Polomer je vzdy kladne cislo, skuste znova: \n"); 
		scanf("%f",&c1.r);
	} 
	
	//info o druhej kruznici
	printf("Zadajte suradnice stredu druhej kruznice: \n");
	scanf("%f%f",&c2.c.x,&c2.c.y);
	printf("Zadajte polomer druhej kruznice (kladne cislo): \n"); 
	scanf("%f",&c2.r);
	while(c2.r<=0) {
		printf("Polomer je vzdy kladne cislo, skuste znova: \n"); 
		scanf("%f",&c2.r);
	} 
}
