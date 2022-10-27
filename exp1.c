#include <stdio.h>
int main()
{
	int x = 1; 
	int y = 2; 
	float fx; 
	float fy;
	printf("x/y (format integer) = %d \n",x/y); 
	printf("x/y (format float) = %f \n",x/y);
	fx = x;
	fy = y;
	printf("fx/fy (format integer) = %d \n",fx/fy); 
	printf("fx/fy (format float) = %f \n",fx/fy);
	printf("(float)x/(float)y (format integer) = %d \n",(float)x/(float)y); 
	printf("(float)x/(float)y (format float) = %f \n",(float)x/(float)y); 
	x = 10;
	y = 3;
	printf("x/y (format integer) = %d \n",x/y); printf("x/y (format float) = %f \n",x/y); 
	return 0;
}
