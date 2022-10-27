int main()
{
/* Kamus */
int a, b;
/* Algoritma */
printf("Maksimum dua bilangan \n");
printf("Ketikkan dua bilangan, pisahkan dengan RETURN : \n ");
scanf("%d %d", &a, &b);
printf("Ke dua bilangan : a = %d, b = %d \n ",a,b);
if (a >= b)
{
printf("Nilai a yang maksimum %d \n", a);
} else /* a < b */
{
printf("Nilai b yang maksimum %d \n", b);
}
return 0;
}