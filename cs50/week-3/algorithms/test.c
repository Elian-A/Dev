#include <stdio.h>

int main(){
 int a = 12;
 int* b = &a;
 int** c = &b;
 //int** c = &b;
  printf("a: %i\n dir: %i\n", a, &a);
  printf("b: %i\n dir: %i, *b: %i\n", b, &b, *b);
  printf("c: %i\n dir: %i, *c: %i\n", c, &c, **c);
}
