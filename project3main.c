#include <stdio.h>
#include "project3.h"
#include "readtitles.c"
#include "getfavorites.c"

// Main file. Calls other .c files to read all titles, find favorites, and write to the file
int main() {
  // Init pointer values
  char **book_ptr, ***favorites_ptr;
  // get the titles
  printf("How many library book titles do you plan to enter? ");
  int book_list_size = read_titles(&book_ptr);
  int favorites_list_size = get_favorites(book_list_size, &book_ptr, &favorites_ptr);
  return 0;
}
