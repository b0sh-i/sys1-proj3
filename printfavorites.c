/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
* STRICTLY ADHERED TO THE TENURES OF THE 
* OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY. 
 */
#include <stdio.h>
#include <stdlib.h>
#include "project3.h"

// print the list of favorite books in the terminal
void print_favorites(char ****favorites_ptr, int favorites_list_size) {
  printf("The books on your favorites list are:\n");
  for (int i = 0; i < favorites_list_size; i++) {
    printf("%d. %s\n", (i+1), *(*(*favorites_ptr+i)));
  }
}
