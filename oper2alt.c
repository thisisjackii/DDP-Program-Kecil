#include <stdio.h>

int main()
{
	char i, j;
	i = 3; j = 4;
	
	if (i && j) { 
		printf("true\n"); 
	} else{
		printf("false\n");
	}
	if (i & j) { 
		printf("true\n");  
	} else{
		printf("false\n");
	}
	if (i || j) { 
		printf("true\n");  
	} else{
		printf("false\n");
	} 
	if (i | j) {
		printf("true\n");
	} else{
		printf("false\n");
	} 
	if (i ^ j) {
		printf("true\n");
	} else{
		printf("false\n");
	} 
	if (-i) {
		printf("true\n");
	} else{
		printf("false\n");
	}
	return 0;	
}


