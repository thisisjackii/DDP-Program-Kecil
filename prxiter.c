#include <stdio.h>
int main()
{
	int sum, x;
	printf("Masukkan nilai x (int), akhiri dengan 999 = ");
	scanf("%d",&x); 
	if(x == 999){ 
		printf("Kasus Kosong \n"); 
	}else{
		sum = x;
		for (;;){
			printf("Masukkan nilai x (int), akhiri dengan 999 : ");
			scanf("%d",&x);
			if ( x == 999) 
				break;
			else{ 
				sum = sum + x; 
			}
		}
	printf("Hasil penjumlahan = %d \n", sum);
	}
	return 0;
}
