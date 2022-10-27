int main()
{
/* Kamus */
int sum, x;
/* Program */
sum =0; /* Inisialisasi */
printf("Masukkan nilai x (int), akhiri dengan 999 = ");
scanf("%d", &x);
while (x != 999) /* Kondisi pengulangan */
{
sum = sum + x;
printf("Masukkan nilai x (int), akhiri dengan 999 = ");
/* Proses */
scanf("%d",&x); /* Next elemen */
}
printf("Hasil penjumlahan = %d \n",sum);
return 0;
}