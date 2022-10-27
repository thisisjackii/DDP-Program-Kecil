#include <stdio.h>
int main ()
{
	#define true 1
	printf("Program akan looping, akhiri dengan ^c "); 
	while (true){ 
		printf("Print satu baris ..... \n");
	}
	return 0;
}
