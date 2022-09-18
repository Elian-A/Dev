#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char *word);
void str_to_lower(char *word);
void print_winner(int score1, int score2);
char* get_string(const char *prompt);

int main(void) {
  // Get input words from both players
  char word1[20];
  char word2[20];
  word1 = get_string("Player 1 word: ");
  word2 = get_string("Player 2 word: "); // Get Players words
  /*
  printf("Player 1 word: ");
  scanf("%s", &word1);
  printf("Player 2 word: ");
  scanf("%s", &word2);
   */

  str_to_lower(word1);
  str_to_lower(word2);

  // Score both words
  int score1 = compute_score(word1);
  int score2 = compute_score(word2);

  printf("Scores\n");
  printf("\tPlayer 1: %i\n", score1);
  printf("\tPlayer 2: %i\n", score2);

  // TODO: Print the winner
  print_winner(score1, score2);
}

int compute_score(char *word) {
  // TODO: Compute and return score for string
  int points = 0;
  int idx;
  for (int i = 0, n = strlen(word); i < n; i++) {
    if (isalpha(word[i])) {
      idx = word[i] - 97; // 97 is 'a'
      points += POINTS[idx];
    }
  }
  return points;
}

void str_to_lower(char *word) {
  for (int i = 0, n = strlen(word); i < n; i++) {
    if (isalpha(word[i])) {
      word[i] = tolower(word[i]);
    }
  }
}

void print_winner(int score1, int score2) {
  if (score1 > score2) {
    printf("Player 1 Wins!!!");
  } else if (score2 > score1) {
    printf("Player 2 Wins!!!");
  } else {
    printf("TIE!!!");
  }
  printf("\n");
}

char* get_string(const char *prompt) {
  char buffer[20];
  printf("%s", prompt);
  scanf("%s", &buffer);
  return buffer;
}
