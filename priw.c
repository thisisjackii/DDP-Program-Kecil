#include <stdio.h>
int main()
{
	int i, N;
	printf("Nilai N > 0 = "); 
	scanf("%d", &N);
	i=1;
	printf("Print i dengan WHILE : \n");
	while (i <= N)
	{
		printf("%d \n",i);
		i++;
	}
	printf("Akhir program \n"); 
	return 0;
}
