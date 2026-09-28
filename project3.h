#ifndef PROJECT3_H_
#define PROJECT3_H_

void add_to_array(char **book_title);

void add_to_favorites(char ***favorite_books, char **book_ptr, int number_of_favorites);

int get_favorites(int book_list_size, char **book_ptr, char ****favorites_ptr);

void print_favorites(char ****favorites_ptr, int favorites_list_size);

void print_list(char ***book_ptr, int book_list_size);

int read_titles(char ***list_of_books);

#endif
