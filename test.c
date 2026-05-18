/*
Tests the functionality of the string library.
*/

#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "dynamic_string.h"

int main(void)
{
    char *str = "Hello, World!";
    String *my_Str = create_String(str, strlen(str));
    printf("My String length: %i\n", my_Str->len);
    printf("My String says: %s\n", my_Str->str);

    string *my_str = get_slice(my_Str);
    printf("My string length: %i\n", my_str->len);
    printf("My string says: %s\n", my_str->str);
};