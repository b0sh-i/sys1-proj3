#include <stdio.h>
#include <stdlib.h>
#include "project3.h"

int get_favorites(int book_list_size, char **book_ptr, char ****favorites_ptr){
  // Grab entered size of input and 
  int number_of_favorites;
  printf("\nOf those %d books, how many do you plan to put on your favorites list? ", book_list_size);
  scanf("%d", &number_of_favorites);
  char ***favorite_books = calloc(number_of_favorites, sizeof(char**));

  if (number_of_favorites >= 1) {
    printf("Enter the number next to each book title you want on your favorites list: ");
    for (int i = 0; i < number_of_favorites; i++) {
      add_to_favorites((favorite_books + i), book_ptr, book_list_size);
    }
  }

  *favorites_ptr = favorite_books;

  return number_of_favorites;
}
