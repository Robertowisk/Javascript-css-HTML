/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
 float metros;
 // aqui o usuario ira inserir o valor que deseja em metros
 printf("insira um valor em metro:");
 scanf("%f",&metros);
 
 float decimetros = metros * 10;
 float centimetros = metros * 100;
 float milimetros = metros * 1000;
 
 
printf("%.2f metros correspondem a %.2f decímetros\n", metros, decimetros);
printf("%.2f metros correspondem a %.2f centímetros\n", metros, centimetros);
printf("%.2f metros correspondem a %.2f milímetros\n", metros, milimetros);

    return 0;
}
