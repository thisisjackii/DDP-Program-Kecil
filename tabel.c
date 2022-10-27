#include <stdio.h>
int main()
{
	int i;
	int tab[10];
	int N;
	N = 5;
	printf("Isi dan print tabel untuk indeks 1..5 \n");
	for (i = 1; i <= N; i++){ 
		tab[i] = i;
	}
	for (i = 1; i <= N; i++){
		printf("i = %d tab[%d] = %d \n", i, i, tab[i]);
	}
	return 0;
}
