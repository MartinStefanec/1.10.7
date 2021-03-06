#include <stdio.h>
#include <time.h>
#include<math.h>
#define max(a, b) (((a) > (b)) ? (a) : (b))
typedef struct{
	float x;
	float y;
}POINT;

typedef struct{
	POINT c;
	float r;
}CIRC;

float dist_haus_circ_circ(CIRC *c1, CIRC *c2){
	
	return max((sqrt(pow((c1->c.x) - (c2->c.x),2)+pow((c1->c.y) - (c2->c.y),2))-c1->r+c2->r),
				sqrt(pow((c1->c.x) - (c2->c.x),2)+pow((c1->c.y) - (c2->c.y),2))-c2->r+c1->r);
}

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
	
	//vypocet
	printf("Hausdorfova vzdialenost medzi zadanymi kruznicami je: %f",dist_haus_circ_circ(&c1,&c2)); 
}
