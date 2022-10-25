/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main() {
  int idade;

  printf("Informe a idade da pessoa:\n");
  scanf("%d", &idade);

  printf("\n%d anos = ", idade);

  if (idade < 0)
     printf("Idade invalida");
 else if ((idade >=0) && (idade <=2))
 printf("Recem-nascido\n");
 else if ((idade >=3) && (idade <=11))
 printf("Criança\n");
 else if ((idade >=12) && (idade <=19))
 printf("Adolescente\n");
 else if ((idade >=20) && (idade <=60))
 printf("Adulto\n");
 else
 printf("Idoso\n");
}



