#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 int a, b, c;
 float x, delta;
 
 printf ("\n Expressão: ax^2 + bx + c = 0");
 printf ("\n Digite o valor de a: ");
 scanf ("%d", &a);
 printf ("\n Digite o valor de b: ");
 scanf ("%d", &b);
 printf ("\n Digite o valor de c: ");
 scanf ("%d", &c);
 
 delta = (pow(b,2)) - (4 * a * c);
 x = (-b +- sqrt(delta))/(2*a);
 
 if (delta<0)
 
 printf ("\n Não existem raízes");
 
 if (delta==0)
 
 printf ("\n Na equação %dx^2 + %dx + %d = 0 existem duas raízes iguais | raízes: %.2f", a, b, c, x);
 
 if (delta>0)
 
 printf ("\n Na equação %dx^2 + %dx + %d = 0 existem duas raízes diferentes | raízes: + ou %.2f", a, b, c, x);
 
}