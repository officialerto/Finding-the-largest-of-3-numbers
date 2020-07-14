#include <stdio.h>
#include <conio.h>

int main (){
	
	int x, y, z;
	
	printf("Lutfen sayilar giriniz; ");
	scanf("%d %d %d", &x, &y, &z);
	
	if (x>y){
		
		if(x>z)
			printf("Sayi: %d", x);
		}
	
	if (y>x){
		
		if(y>z)
			printf("Sayi: %d", y);
		}	
	
	if (z>x){
		
		if(z>y)
			printf("Sayi: %d", z);
		}		

	return 0;
	getch();
}
