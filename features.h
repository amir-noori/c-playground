#ifndef FEATURES_HEADER_H
#define FEATURES_HEADER_H

#include <stdio.h>

// constants & numbers
extern int x1_decimal;
extern float x2_float;
extern int x3_octal;
extern int x4_hex;

/*
    structs
*/

struct User
{
    int userId;
    char *username;
};

/*
    functions
*/

// simple function declaration
void print_to_console(void);

void show_user_info(struct User *user_p);

void show_users_info(struct User *[], int);

void test(void);

/*
    arrays
*/

#endif