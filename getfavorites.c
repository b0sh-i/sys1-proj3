/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
* STRICTLY ADHERED TO THE TENURES OF THE 
* OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY. 
 */
#include <stdio.h>
#include <stdlib.h>
#include "project3.h"

// Get the number of favorite books and use add_to_favorites function to create the list
int get_favorites(int book_list_size, char **book_ptr, char ****favorites_ptr){
  // Grab entered size of input and 
  int number_of_favorites;
  printf("\nOf those %d books, how many do you plan to put on your favorites list? ", book_list_size);
  scanf("%d", &number_of_favorites);
  char ***favorite_books = calloc(number_of_favorites, sizeof(char**));

  if (number_of_favorites >= 1) {
    printf("Enter the number next to each book title you want on your favorites list: ");
    for (int i = 0; i < number_of_favorites; i++) {
      add_to_favorites((favorite_books + i), book_ptr, book_list_size);
    }
  }

  *favorites_ptr = favorite_books;

  return number_of_favorites;
}
