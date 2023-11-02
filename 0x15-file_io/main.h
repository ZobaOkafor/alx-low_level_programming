#ifndef main_h
#define main_h

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>


/* Function prototypes for tasks */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


/* Prototypes for functions used in 100-elf_header.c */
int check_elf(char *p);
void check_system(char *p);
void handle_magic(char *p);
void handle_class(unsigned char *p);
void handle_address(char *p);
void handle_data(char *p);
void handle_version(char *p);
void handle_osabi(char *p);
void handle_abi(unsigned char *p);
void handle_type(char *p);
void handle_entry(unsigned long int e_entry, unsigned char *p);
void close_elf(int elf);


#endif
