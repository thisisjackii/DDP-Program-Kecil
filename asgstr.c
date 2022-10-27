int main()
{
    /* Kamus */
    char *str;
    char *str1;
    /* Program */
    printf("\nBaca string, maks 20 karakter : ");
    str=(char*) malloc (20* sizeof(char));
    strcpy(str,"Ini string ..... ");
    printf("String yang diisikan : %s\n", str);
    str1=(char*) malloc (20* sizeof(char));
    strcpy(str1,str);
    printf("String yang disalin : %s\n", str1);
    return 0;
}