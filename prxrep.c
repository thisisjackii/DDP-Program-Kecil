#include <stdio.h>
int main()
{
	int sum, x;
	printf("Masukkan nilai x (int), akhiri dengan 999 = ");
	scanf("%d",&x); 
	if (x == 999){
		printf("Kasus Kosong \n");
	}
	else{
		sum = 0;
		do{
			sum = sum + x;
			printf("Masukkan nilai x (int), akhiri dengan 999 : "); 
			scanf("%d",&x);
		}while (x != 999);
		printf("Hasil penjumlahan = %d \n", sum);
	}
	return 0;
}
