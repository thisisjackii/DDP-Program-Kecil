#include <stdio.h>

int main()
{
	int i,j;
	
	i = 3;
	j = i++; // j = i; assign dlu baru dijumlah i+1 

	printf("Nilai i : %d\nNilai j : %d\n",++i,j);
	return 0;
}
