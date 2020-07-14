#include <stdio.h>
#include <conio.h>

int main (){
	
	int i, sayi;
	float j, ort, toplam;
		
		
		printf("Lutfen sayi miktari girin: \n");
		scanf("%f", &j);
		
		toplam = 0;
		
		for (i=1; i<=j; i++){
			
			printf("%d. sayiyi girin:", i);
			scanf("%d",&sayi);
			
			toplam = toplam + sayi;
			
		}
		
		ort = toplam / j;
		
		printf("Girilen sayinin ort: %0.1f", ort);

	
	getch();
}
