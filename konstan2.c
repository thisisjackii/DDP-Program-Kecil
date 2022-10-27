#define pi = 3.1415
int main()
{
    /* Kamus */
    float r, luas, kel;
    /* program */
    /* Baca data */
    printf("Jari-jari lingkaran = ");
    scanf("%f", &r);
    /* Hitung dengan rumus */
    luas = pi * r * r;
    /* Print hasil */
    printf("Luas lingkaran = %6.2f\n", luas);
    kel = 2 * pi * r;
    printf("Keliling lingkaran = %6.2f\n", kel);
    printf("Akhir Program \n");
    return 0;
}