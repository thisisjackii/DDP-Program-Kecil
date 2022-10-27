#include <stdio.h>
#include <limits.h>

int main()
{
	int i;
	long int ii;
	
	printf("Hello \n");
	i=1234;
	ii=123456;
	
	printf("Ini nilai i=1234 = %d \n",i);
	printf("Ini nilai ii=123456 = %ld\n",ii);
	
	printf("Min dan max integer = %d, %d \n",INT_MIN,INT_MAX);
	printf("Max long integer = %ld \n",LONG_MAX);
	return 0;
}
