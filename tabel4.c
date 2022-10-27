#include <stdio.h> 
int main()
{
	int i;
	int tab[10]; 
	int N;
	N = 5;
	printf("Isi dan print tabel untuk indeks 1..5 \n");
	i = 1;
	while ( i <= N )
	{
		tab[i] = i;
		printf("i = %d tab[%d] = %d \n", i, i, tab[i]); 
		i++;
	}
	return 0;
}
