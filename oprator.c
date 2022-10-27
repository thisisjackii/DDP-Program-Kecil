#include <stdio.h>
#include "boolean.h"
#include <stdlib.h>

int main()
{
	boolean Bool1, Bool2, TF;
	int i,j,hsl;
	div_t div_result;
	float x,y,res;
	
	printf("utk program ini, baca teksnya dan tambahkan output \n");
	Bool1=true; Bool2=false;
	printf("Bool1 = %d dan Bool2 = %d \n",Bool1,Bool2);
	TF = Bool1&&Bool2;
	printf("TF = Bool1 And Bool2 : %d \n",TF);
	TF=Bool1||Bool2;
	printf("TF = Bool1 Or Bool2 : %d \n",TF);
	TF=!Bool1;
	printf("TF = Not Bool1 : %d \n",TF);
	TF = Bool1 ^ Bool2;
	printf("TF = Bool1 Xor Bool2 : %d \n",TF);
	
	i=5; j=2;
	printf( "Nilai i = %d dan nilai j = %d\n",i, j);
	hsl = i+j;
	printf ("Hasil operasi i + j : adalah %d\n", hsl); 
	hsl = i-j;
	printf ("Hasil operasi i - j : adalah %d\n", hsl); 
	hsl = i / j;
	printf ("Hasil operasi i / j : adalah %d\n", hsl); 
	hsl = i*j;
	printf ("Hasil operasi i * j : adalah %d\n", hsl); 
	div_result = div(i,j); 
	printf ("Hasil operasi i div j : adalah %d\n", div_result); 
	hsl = i % j; 
	printf ("Hasil operasi i mod j : adalah %d\n", hsl);
	
	x = 5.0; y=2.0;
	printf("Nilai x = %f dan nilai y = %f\n",x,y);
	res=x+y;
	printf("Hasil operasi x + y : adalah %f\n", res);
	res=x-y;
	printf("Hasil operasi x - y : adalah %f\n", res);
	res=x/y;
	printf("Hasil operasi x / y : adalah %f\n", res);
	res=x*y;
	printf("Hasil operasi x * y : adalah %f\n", res);	
	
	printf ("Karena nilai i = %d dan nilai j = %d  maka \n", i, j);
	TF = (i == j);
	printf ("Hasil Operasi TF = (i == j) adalah : %d\n", TF); 
	TF = (i != j);
	printf ("Hasil Operasi TF = (i != j) adalah : %d\n", TF); 
	TF = (i < j);
	printf ("Hasil Operasi TF = (i < j) adalah : %d\n", TF); 
	TF = (i > j);
	printf ("Hasil Operasi TF = (i > j) adalah : %d\n", TF); 
	TF = (i <= j);
	printf ("Hasil Operasi TF = (i <= j) adalah : %d\n", TF); 
	TF = (i >= j);
	printf ("Hasil Operasi TF = (i >= j) adalah : %d\n", TF);
	
	printf ("Karena nilai x = %f dan nilai y = %f maka \n",x,y);
	TF = (x != y);
	printf ("Hasil Operasi TF = (x != y) adalah : %d \n ", TF); 
	TF = (x < y);
	printf ("Hasil Operasi TF = (x < y) adalah : %d \n", TF); 
	TF = (x > y);
	printf ("Hasil Operasi TF = (x > y) adalah : %d \n", TF); 
	TF = (x <= y);
	printf ("Hasil Operasi TF = (x <= y) adalah : %d \n ", TF); 
	TF = (x >= y);
	printf ("Hasil Operasi TF = (x >= y) adalah : %d \n", TF); 
	return 0;
	
}
