#include <stdio.h>

int main(){
    char op;

    do{
        printf("1) Capturar enteros.\n");
        printf("2) Mostrar cadena.\n");
        printf("3) Agregar personaje.\n");
        printf("4) Salir.\n");
        printf("Elige una opcion: ");
        scanf("%c",&op);
        fflush(stdin);
    }while (op!='4');

    return 0;
}