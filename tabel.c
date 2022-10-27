int main()
{
/* kamus */
int i;
int tab[10]; /* Cara mengacu elemen ke-i : tab[i] */
int N;
/* program */
N = 5;
printf("Isi dan print tabel untuk indeks 1..5 \n");
/* Isi dengan assignment */
for (i = 1; i <= N; i++) {
tab[i] = i;
}
/* Traversal ; print */
for (i = 1; i <= N; i++) {
printf("i = %d tab[%d] = %d \n", i, i, tab[i]);
}
return 0;
}