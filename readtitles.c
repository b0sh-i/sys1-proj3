#include <stdio.h>
#include <stdlib.h>
#include "project3.h"
#include "addtoarray.c"

// Prompt the user for siz of book list, make an array contanining all of the books
int read_titles(char ***list_of_books) {
  int number_of_books;
  scanf("%d", &number_of_books);

  // if number_of_books is larger than or equal to 1,
  // allocate a size in an array and make the 
  char **book_titles = calloc(number_of_books, sizeof(char*));
  if (number_of_books >= 1) {
    printf("Enter the %d book titles one line at a time: ", number_of_books);
    for (int i = 0; i < (int)number_of_books; i++) {
      *(book_titles + i) = calloc(1, 61);
      add_to_array(*(book_titles + i), number_of_books);
    }
  }

  *list_of_books = book_titles;
  // Return the number of books for later use
  return number_of_books;
}
