#include <stdio.h>
#include <string.h>

int main(){
  char nombre[20] = "something";
  double lenght = strlen(nombre);
  nombre[0] = nombre[0] - 32;
  printf("%s", nombre);
};
