int main()
{
/* Kamus */
int sum, x;
/* Program */
printf("Masukkan nilai x (int), akhiri dengan 999 = ");
/* Inisialisasi */
scanf("%d",&x);
if (x == 999)
{ printf("Kasus Kosong \n"); }
else
{ /* Minimal ada satu data yang dijumlahkan */
sum = x; /* Inisialisasi; invarian !! */
for (;;)
{
printf("Masukkan nilai x (int), akhiri dengan 999 : ");
scanf("%d",&x); /* Next elemen */
if ( x == 999)
break;
else
{ sum = sum + x; } /* proses */
}
printf("Hasil penjumlahan = %d \n", sum); /* Terminasi */
}
return 0;
}