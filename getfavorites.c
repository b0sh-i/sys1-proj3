#include <stdio.h>
#include <stdlib.h>
#include "addtofavorites.c"

int get_favorites(int book_list_size, char ***book_ptr, char ****favorites_ptr){
  int number_of_favorites;
  printf("How many favorites would you like to choose? ");
  scanf("%d", &number_of_favorites);
  char ***favorite_books = calloc(number_of_favorites, sizeof(char*));
  if (number_of_favorites >= 1) {
    printf("Enter the number next to each book title you want on your favorites list: ");
    for (int i = 0; i < number_of_favorites; i++) {
      *(favorite_books + i) = calloc(1, 61);
      add_to_favorites(*(favorite_books + i), *book_ptr, number_of_favorites);
    }
  }

  *favorites_ptr = favorite_books;

  return number_of_favorites;
}
