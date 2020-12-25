#include <stdio.h>
#include <stdlib.h>

int main()

{ float att=0,comp=0,yards=0,td=0,interce=0;
 float A=0,B=0,C=0,D=0,PasorPuani=0;
printf("Hosgeldiniz\n");
 printf("\n\n");
printf("PASSES ATTEMPTED(ATD) degerini girin\n");
 scanf("%f",&att);
 printf("PASSES COMPLETED(COMP) degerini girin\n");
 scanf("%f",&comp);
 printf("PASSING YARDS(YARDS) degerini girin\n");
 scanf("%f",&yards);
printf("TOUCHDOWN PASSES(TD) degerini girin\n");
 scanf("%f",&td);
printf("INTERCEPTIONS(INT) degerini girin\n");
scanf("%f",&interce);
A=(((comp/att)*100)-30)/20;
 B=((td/att)*100)/5;
 C=(9.5-((interce/att)*100))/4;
 D=((yards/att)-3)/4;
if (A>2.375)
A=2.375;
 else if (A<0)
A=0;
if (B>2.375)
 B=2.375;
 else if (B<0)
B=0;
if (C>2.375)
 C=2.375;
 else if (C<0)
C=0;
if (D>2.375)
 D=2.375;
 else if (D<0)
D=0;
PasorPuani=((A+B+C+D)/6)*100;
printf("Pasor Puani : %.2f\n",PasorPuani);
return 0; }

