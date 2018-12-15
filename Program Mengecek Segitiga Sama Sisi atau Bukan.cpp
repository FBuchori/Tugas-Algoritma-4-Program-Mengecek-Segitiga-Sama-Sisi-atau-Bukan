#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	double a, b, c;
	printf("menentukan segitiga sama sisi atau bukan\n");
	printf("========================================\n\n");
	
	printf("masukkan panjang sisi a : ");
	scanf("%f", &a); fflush (stdin);
	
	printf("masukkan panjang sisi b : ");
	scanf("%f", &b); fflush (stdin);
	
	printf("masukkan panjang sisi c : ");
	scanf("%f", &c); fflush (stdin);
	
	printf("\n=========================================\n\n");
	if(a && b==c)
	
	printf("segitiga sama sisi\n");
	else
	printf("bukan segitiga sama sisi\n");
	return 0;
}
