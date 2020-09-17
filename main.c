#include <stdio.h>
#include "personaje.h"

void capturar_enteros(){
    int numeros[5],sum;
    printf("Ingresa 5 numeros\n ");
    for(size_t i=0; i<5; i++){
        printf("%i.-", i+1);
        scanf("%i", &numeros[i]); }
    printf("Numeros ingresados: ");
    for(size_t i=0; i<5; i++){
        printf("%i ",numeros[i]);
        sum+=numeros[i];}
    printf("\nSuma: %i",sum);
    printf("\nPromedio: %f\n",sum/5.0); 
}

void mostrar(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s",cadena);
    }
    

}

int main(){
    char op;
    char cadena[20];
    int n;

    do{
        printf("1) Capturar enteros.\n");
        printf("2) Mostrar cadena.\n");
        printf("3) Agregar personaje.\n");
        printf("4) Mostrar personaje.\n");
        printf("0) Salir.\n");
        printf("Elige una opcion: ");
        scanf("%c",&op);

        switch (op)
        {
        case '1':
            capturar_enteros();
            break;
        case '2':
            printf("Dame tu nombre: ");
            fflush(stdin);
            fgets(cadena, sizeof(cadena),stdin);
            printf("n: ");
            scanf("%i",&n);
            mostrar(n, cadena);
            break;
        case '3':
            capturar_personaje();
            break;
        case '4':
            mostrar_personaje();
            break;
        default:
            break;
        }

        fflush(stdin);
    }while (op!='0');

    return 0;
}