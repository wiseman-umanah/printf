#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(int c);
char *_int_to_str(int num);
int len_of_str(int num);
int handle_d(int num);
int handle_s(char *str);
int handle_per_n_char(char c);
char *_uint_to_str(unsigned int num);
int handle_u(unsigned int num);
int handle_oct(unsigned int num);
int handle_bin(unsigned int num);

#endif /*MAIN_H*/
