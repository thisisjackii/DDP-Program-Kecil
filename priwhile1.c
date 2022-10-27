int main()
{
/* Kamus */
int N;
int i = 1;
/* Program */
printf("Nilai N >0 = "); /* Inisialisasi */
scanf("%d", &N);
printf("Print i dengan WHILE (ringkas) : \n");
while (i <= N) /* Kondisi pengulangan */
{
printf("%d \n",i); /* Proses */
i++; /* Next elemen */
} /* ( i > N ) */
printf("Akhir program \n");
return 0;
}