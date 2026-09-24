#include <stdio.h>
#include <stdlib.h>
#include "project3.h"


void add_to_array(char *book_title, int number_of_books){
  char books;
  char *start = book_title;
  scanf(" %c", &books);

  // While the char in books does not equal '\n'
  // Add the value to the index of the array.
  while (books != '\n') {
    *book_title = books;
    book_title++;
    scanf("%c", &books);
  }
  // Manually inject the null value
  *book_title = '\0';
}
