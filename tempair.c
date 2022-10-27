#include <stdio.h>
int main()
{
	int T;
	printf("Contoh IF tiga kasus \n"); 
	printf("Temperatur (dlm. derajat C) = "); 
	scanf("%d",&T);
	if (T < 0){
		printf("Wujud air beku %d \n", T);
	} else if ((T >= 0) && (T <= 100)){
		printf("Wujud air cair %d \n", T);
	} if (T > 100){
		printf("Wujud air uap/gas %d\n",T);
	}
	return 0;
}
