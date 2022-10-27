#include <stdio.h>
int main()
{
	int sum, x;
	sum=0;
	printf("Masukkan nilai x (int), akhiri dengan 999 = "); 
	scanf("%d", &x);
	while (x != 999){
		sum = sum + x;
		printf("Masukkan nilai x (int), akhiri dengan 999 = ");
		scanf("%d",&x);
	}
	printf("Hasil penjumlahan = %d \n",sum); 
	return 0;
}
