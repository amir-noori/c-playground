#include "features.h"
#include <malloc.h>

// constants & numbers
int x1_decimal = 10;
float x2_float = 20.2;
int x3_octal = 030;
int x4_hex = 0x10;

void print_to_console()
{
    printf("App Started.\n");
}

void show_user_info(struct User *user_p)
{
    printf("User info:\n");
    printf(" username: %s\n", user_p->username);
    printf(" user ID: %d\n", user_p->userId);
}

void show_users_info(struct User *users[], int len)
{
    for (int i = 0; i < len; i++)
    {
        show_user_info(users[i]);
    }
}

int *simple_swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    int *result = malloc(sizeof(int));
    result[0] = a;
    result[1] = b;
    return result;
}

void test(void)
{
    print_to_console();

    struct User user1 = {
        100,
        "admin"
    };
    struct User usera = {
        200,
        "usera"
    };
    struct User userb = {
        300,
        "userb"
    };

    struct User *users[] = {&user1, &usera, &userb};
    show_users_info(users, 3);

    /////////////////////////
    printf("\n\n***************************\n\n");

    int a = 10;
    int b = 20;
    printf("a: %d, b: %d\n", a, b);
    int *result = simple_swap(a, b);
    printf("a: %d, b: %d\n", result[0], result[1]);

    /////////////////////////
    printf("\n\n***************************\n\n");
}
