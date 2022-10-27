#include <stdio.h>
int main()
{
	int N;
	int i = 1;
	printf("Nilai N > 0 = ");
	scanf("%d", &N);
	printf("Print i dengan WHILE (ringkas) : \n");
	while (i <= N){
		printf("%d \n",i);
		i++;
	}
	printf("Akhir program \n"); 
	return 0;
}
