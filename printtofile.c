/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
* STRICTLY ADHERED TO THE TENURES OF THE 
* OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY. 
 */
#include <stdio.h>
#include "project3.h"

// Print lists to file
void print_to_file(char ***book_ptr, char ****favorites_ptr, char *file_name, int favorites_list_size, int book_list_size) {
  FILE *output_file;
  output_file = fopen(file_name, "w");
  fprintf(output_file, "Books I've Read:\n");
  for (int i = 0; i < book_list_size; i++) {
    fprintf(output_file, "%s\n", *(*book_ptr + i));
  }
  fprintf(output_file, "\nMy Favorites are:\n");
  for (int i = 0; i < favorites_list_size; i++) {
    fprintf(output_file, "%s\n", *(*(*favorites_ptr+i)));
  }
  printf("Your booklist and favorites have been saved to the file %s", file_name);
}
