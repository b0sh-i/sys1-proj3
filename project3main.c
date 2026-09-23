#include <stdio.h>
#include "project3.h"
#include "readtitles.c"

// Main file. Calls other .c files to read all titles, find favorites, and write to the file
int main() {
  // Init pointer values
  char **book_ptr, ***favorites_ptr;
  // get the titles
  printf("How many library book titles do you plan to enter? ");
  int list_size = read_titles(&book_ptr);
  return 0;
}
