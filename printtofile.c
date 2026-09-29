#include <stdio.h>
#include "project3.h"

void print_to_file(char **book_ptr, char ***favorites_ptr, char *file_name) {
  FILE *output_file;
  output_file = fopen(file_name, "w");
  fprintf(output_file, "Books I've Read:");
  fprintf(output_file, "My Favorites are:")
}
