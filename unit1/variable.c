#include <stdio.h>
#include "sum.h"

//Datatype: integers(int), flotantes(float), cadenas de texto (char*) (string), caracteres (char)
//cajitas que almacenan info, para usarlas depues en codigo:
//Global Variables//
int edad = 18;
float estatura = 1.65;
char* name = "Samantha Castro";
char sexo = 'F'; 
int temp;


int main(){
    int after10years = suma(edad, 10);
    printf("mi edad después de 10 años: %d", after10years);
    return 0; 
}