#include <stdio.h>

void algoritmoOrdenamiento (int array[], int size)

for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
        if (array[i] > array[i + 1]) {
            int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
oid printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {1,3,0,10};
  int size = sizeof(data) / sizeof(data[0]);

  algoritmoOrdenamiento(data, size);
  
  printf("Arreglo en orden:\n");
  printArray(data, size);
}