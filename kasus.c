int main()
{
/* Kamus */
char cc;
/* Program */
printf("Ketikkan sebuah huruf, akhiri dengan RETURN !\n ");
scanf("%c",&cc);
switch (cc)
{
case 'a' :{
printf("Yang anda ketik adalah a\n");
break; }
case 'u' : {
printf("Yang anda ketik adalah u\n");
break; }
case 'e' : {
printf("Yang anda ketik adalah e\n");
break; }
case 'i' : {
printf("Yang anda ketik adalah i\n");
break; }
default :
printf("Yang anda ketik adalah huruf mati\n");
}
return 0;
}
