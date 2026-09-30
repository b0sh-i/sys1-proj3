#include <stdio.h>
#include <stdlib.h>
#include "project3.h"

// Free all of the allocated blocks in memory.
void free_memory(char ***book_ptr, char ****favorites_ptr, int favorites_list_size, int book_list_size) {
  char **free_books = *book_ptr;
  char ***free_favorites = *favorites_ptr;
  for (int i = 0; i < book_list_size; i++) {
    free(*free_books);
    free_books++;
  }
  free(*book_ptr);
  for (int i = 0; i < favorites_list_size; i++) {
    free(*free_favorites);
    free_favorites++;
  }
  free(*favorites_ptr);
}
