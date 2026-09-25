#include <stdio.h>
#include <stdlib.h>

void add_to_favorites(char **favorite_books, char **book_ptr, int number_of_favorites) {
  int favorites;
  char not_number;
  int previous_input = 0;
  int i;
  scanf("%d%c", &favorites, &not_number);

  while (not_number != ' ' && not_number != '\n') {
    i = (favorites - 1) - previous_input;
    favorite_books = book_ptr + i;
    previous_input = i;
    scanf("%d%c", &favorites, &not_number);
  }
}
