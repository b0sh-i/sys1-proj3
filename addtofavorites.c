#include <stdio.h>
#include <stdlib.h>
#include "project3.h"

// Adds the imputs to the array
void add_to_favorites(char ***favorite_books, char **book_ptr, int number_of_favorites) {
  char **books = calloc(1, 61);
  char **front = books;
  char user_input;
  int movement = 0;
  scanf("%c", &user_input);

  while (user_input != ' ' && user_input != '\n') {
    movement = (((int)(user_input)) - 1);
    *books++ = (*book_ptr + movement);
    scanf("%c", &user_input);
  }
  *favorite_books = front;
}
