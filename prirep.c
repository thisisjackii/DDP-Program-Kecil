#include <stdio.h>
int main()
{
	int i, N;
	printf("Nilai N > 0 = ");
	scanf("%d",&N);
	i = 1;
	printf("Print i dengan REPEAT : \n"); 
	do{
		printf("%d \n",i);
		i++;
	}while (i <= N);
	printf("Akhir program \n");
	return 0;
}


