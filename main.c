//LIBRERIA
#include <stdio.h>
//DEFINIMOS VARIABLES
int busqueda(int arregloBuscar[],int tamanio, int numBuscar);

int main() {
    int numBus;
    int arreglo[] = {0,1,2,3,4,5,6,7,8,9};
    int tamanio = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Ingrese un numero a buscar");
    scanf("%d", &numBus);

    int resultado = busqueda(arreglo, tamanio, numBus);

    if(resultado == -1){
        printf("Numero no encontrado");
    }
    else{
        printf("Numero encontrado en el indice %d", resultado);

    }
}

int busqueda(int arregloBuscar[], int tamanio, int numBuscar){

    
    for (size_t i = 0; i < tamanio; i++)
    {
        if(arregloBuscar[i] == numBuscar){
            return i;
        }
    }
    
    return -1;
}