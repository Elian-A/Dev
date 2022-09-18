#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  if (argc == 1 || argc > 2) {
    printf("Incorrect usage\n");
    printf("Call the function and give a list of numbers (DO NOT SEPARATE "
           "THEM)\n");
    return 1;
  }

  char find;
  printf("Enter the character to be searched: ");
  scanf("%1c", &find);

  for (char *i = argv[1]; *i != '\0'; i++) {
    if (*i == find) {
      printf("Character %c finded\n", *i);
      return 0;
    }
  }
  printf("Character not finded\n");
  return 0;
}
