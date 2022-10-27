#include <stdio.h>
#define pi 3.1415 
int main()
{
	float r, luas, kel;
	printf("Jari-jari lingkaran = "); 
	scanf("%f", &r);
	luas = pi * r * r;
	printf("Luas lingkaran = %6.2f\n", luas); 
	kel = 2 * pi * r;
	printf("Keliling lingkaran = %6.2f\n", kel); 
	printf("Akhir Program \n");
	return 0;
}
