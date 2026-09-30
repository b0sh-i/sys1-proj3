/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
* STRICTLY ADHERED TO THE TENURES OF THE 
* OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY. 
 */
#include <stdio.h>
#include <stdlib.h>
#include "project3.h"

// Free all of the allocated blocks in memory.
void free_memory(char ***book_ptr, char ****favorites_ptr, int favorites_list_size, int book_list_size) {
  // New pointers to free the titles before freeing the pointer to the array
  char **free_books = *book_ptr;
  char ***free_favorites = *favorites_ptr;

  // Free book titles, then book pointer
  for (int i = 0; i < book_list_size; i++) {
    free(*free_books);
    free_books++;
  }
  free(*book_ptr);

  // Free favorite titles, then favorites pointer.
  for (int i = 0; i < favorites_list_size; i++) {
    free(*free_favorites);
    free_favorites++;
  }
  free(*favorites_ptr);
}
