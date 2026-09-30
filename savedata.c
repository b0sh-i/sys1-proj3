/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE 
* STRICTLY ADHERED TO THE TENURES OF THE 
* OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY. 
 */
#include <stdio.h>
#include "project3.h"

// Creates the array and passes file name to the print_to_file function to print the lists to a file.
void save_data(char ***book_ptr, char ****favorites_ptr, int favorites_list_size, int book_list_size) {
  char user_response;
  scanf(" %c", &user_response);
  if (user_response == '1') {
    printf("What file name do you want to use? ");
    char file_name[256];
    scanf("%s", file_name);
    print_to_file(book_ptr, favorites_ptr, file_name, favorites_list_size, book_list_size);
  }
}
