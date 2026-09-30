/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
* STRICTLY ADHERED TO THE TENURES OF THE 
* OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY. 
 */
#include <stdio.h>
#include <stdlib.h>
#include "project3.h"


// Adds the inputs to an array of book titles
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
