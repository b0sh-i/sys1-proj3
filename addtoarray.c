#include <stdio.h>
#include <stdlib.h>
#include "project3.h"


void add_to_array(char **book_title){
  char *books = calloc(1, 61);
  char *front = books;
  char user_input;
  scanf(" %c", &user_input);

  // While the char in books does not equal '\n'
  // Add the value to the index of the array.
  
  while (user_input != '\n') {
    *books++ = user_input;
    scanf("%c", &user_input);
  }
  // Manually inject the null value
  *books = '\0';
  *book_title = front;
}
