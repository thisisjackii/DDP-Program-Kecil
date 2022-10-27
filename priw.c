int main()
{
/* Kamus */
int i, N;
/* Program */
printf("Nilai N >0 = "); /* Inisialisasi */
scanf("%d", &N);
i=1; /* First elemen */
printf("Print i dengan WHILE : \n");
while (i <= N) /* Kondisi pengulangan */
{
printf("%d \n",i); /* Proses */
i++; /* Next elemen */
} /* ( i > N ) */
printf("Akhir program \n");
return 0;
}