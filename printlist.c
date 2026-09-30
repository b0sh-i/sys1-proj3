/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
* STRICTLY ADHERED TO THE TENURES OF THE 
* OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY. 
 */
#include <stdio.h>
#include <stdlib.h>
#include "project3.h"

// print out list of books
void print_list(char ***book_ptr, int book_list_size) {
  printf("\nYou've entered:\n");
  for (int i = 0; i < book_list_size; i++) {
    printf("%d. %s\n", (i+1), *(*book_ptr + i));
  }
}
