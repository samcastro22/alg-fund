#include <stdio.h>

//Prototipo 
int sumaNumbers (int number1, int number2);


int main (int argc, char**argv){
    //llamando a la funcion 
    int mySum = sumaNumbers(2, 4);
    printf("sume 10 + 20 = %d\n", sumaNumbers(10, 20));
}

//Definir la funcion 
int sumaNumbers (int number1, int number2){
    //variables locales 
    int suma = 0;
    suma = number1 + number2;
    return suma; 
}