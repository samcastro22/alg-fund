#include <stdio.h>

int main (){
    int myArray[3]={5, 2, 3};
    int nuevoArreglo[3]={6, 4, 8};
    int nuevoArreglo2[3]={3, 4, 5};
    int i = 0;

    printf("[");
    //void//
    void printArray(int array[3], int arrayLenght){
        i=0;
        while(i < 3){
            printf("%d", array[i]);
            if(i < 2){
                printf(",");
            }
            i++;
        }
    }
    printArray(myArray, 3);
    printArray(nuevoArreglo, 3);
    printArray(nuevoArreglo2, 3);
    printf("]\n");

    return 0;
}