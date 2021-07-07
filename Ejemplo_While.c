#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int A=0;
    printf("Ingrese un n%cmero para mostrar, negativo para salir: ", 163);
    scanf("%d",&A);
    while (A>=0)
    {
        system("cls");
        printf("El n%cmero ingresado es: %d\n", 163, A);
        system("pause");
        system("cls");
        printf("Ingrese un n%cmero para mostrar, negativo para salir: ", 163);
        scanf("%d",&A);
    }
    printf("Usted ingreso un valor negativo!\n");
    system("pause");
}
