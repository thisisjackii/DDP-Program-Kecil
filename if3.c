int main ()
{
    /* Kamus */
    int a;
    /* Algoritma */
    printf("Contoh IF tiga kasus \n");
    printf("Ketikkan suatu nilai integer : ");
    scanf("%d",&a);
    if (a > 0)
    {
    printf("Nilai a positif ...%d\n", a);
    } else
    if (a == 0)
    {
    printf("Nilai a samadengan nol %d\n", a);
    } else /* a < 0 */
    {
    printf("Nilai a negatif ...%d\n", a);
    }
    return 0;
}