#include <stdio.h>
int suma(int a, int b)
{
    int res= a+b;
    return res;
}
void main(int argc, char const *argv[])
{   
int num1,num2=0,resultado;
    printf("Ingrese el 1re valor : ");
    scanf("%d",&num1);
    printf("Ingrese el 2do valor : ");
    scanf("%d",&num2);
    resultado=suma(num1,num2);
    printf("Resultado:%d", resultado);
    //return 0;

}