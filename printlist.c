#include <stdio.h>
#include <stdlib.h>
#include "project3.h"

void print_list(char ***book_ptr, int book_list_size) {
  printf("List of books:\n");
  for (int i = 0; i < book_list_size; i++) {
    printf("%d. %s\n", (i+1), *(*book_ptr+i));
  }
}
