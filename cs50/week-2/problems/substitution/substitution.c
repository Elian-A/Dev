#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function declaration
void chipher_substitution(char *phrase, char* key);
void string_to_lower(char *string);
int verify_argument(char *arg);
int verify_usage(int argc);
void string_to_lower();

int main(int argc, char *argv[]) {
  if (verify_usage(argc) || verify_argument(argv[1]))
    return 1;
  char *key = argv[1];
  unsigned long lenght = strlen(key);
  char *phrase = malloc(35 * sizeof(char));
  printf("Phrase to encrypt: ");
  scanf("%35s", phrase);
  //...
  free(phrase);
  return 0;
}

// Function definition
void chipher_substitution(char *phrase, char* key) {
  //Preguntarle a Arnold
}

int verify_usage(int argc) {
  if (argc == 1 || argc > 2) {
    printf("Usage: substitution key\n");
    return 1;
  }
  return 0;
}

int verify_argument(char *arg) {
  int lenght = strlen(arg);

  //Verify that all character are letters
  for (char *i = arg; *i != '\0'; i++) {
    if (!isalpha(*i)) {
      printf("Key must contain only letters\n");
      return 1;
    }
  }

  //Verify that the lenght of the key is 26
  if (lenght != 26) {
    printf("Key must contain 26 characters\n");
    return 1;
  }

  //Verify that all characters are different
  char *arg_cpy = malloc((lenght + 1) * sizeof(char));
  int flag = 0;
  strcpy(arg_cpy, arg);
  string_to_lower(arg_cpy);
  for (int i = 0; i < lenght - 1; i++) {
    for (int j = i + 1; j <= lenght; j++) {
      if (arg_cpy[i] == arg_cpy[j]) {
        flag = 1;
      }
    }
  }
  if (flag) {
    printf("Key must be made of different characters\n");
    return 1;
  }
  free(arg_cpy);
  return 0;
}

void string_to_lower(char* string){
  for (char* i = string; *i != '\0'; i++) {
   *i = tolower(*i);
  }
}
