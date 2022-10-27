#include <stdio.h>
int main()
{
	int i,N;
	printf("Nilai N > 0 = "); 
	scanf("%d",&N);
	i=1;
	printf("Print i dengan ITERATE : \n");
	for (;;)
	{
		printf("%d \n",i);
		if (i==N) 
			break;
		else
		{
			i++;	
		}

	}
	printf("Akhir program \n"); 
	return 0;
}
