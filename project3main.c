#include <stdio.h>
#include "project3.h"

// Main file. Calls other .c files to read all titles, find favorites, and write to the file
int main() {
  // Init pointer values
  char **book_ptr, ***favorites_ptr;
  // get the titles
  printf("How many library book titles do you plan to enter? ");
  int book_list_size = read_titles(&book_ptr);
  print_list(&book_ptr, book_list_size);
  int favorites_list_size = get_favorites(book_list_size, book_ptr, &favorites_ptr);
  print_favorites(&favorites_ptr, favorites_list_size);
  return 0;
}
