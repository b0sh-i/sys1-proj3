#include <stdio.h>
#include <stdlib.h>
#include "project3.h"

void print_favorites(char ****favorites_ptr, int favorites_list_size) {
  printf("List of favorites:\n");
  for (int i = 0; i < favorites_list_size; i++) {
    printf("%d. %s\n", (i+1), *(*(*favorites_ptr+i)));
  }
}
