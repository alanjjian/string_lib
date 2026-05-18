/*
Tests the functionality of the string library.
*/

#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "dynamic_string.h"

int main(void)
{
    char *str = "Hello, World!\n";
    String *my_Str = create_String(str, strlen(str));
    printf("My String length: %i\n", my_Str->len);
    printf("My String says: %s\n", my_Str->str);

    string *my_str = get_slice(my_Str);
    printf("My string length: %i\n", my_str->len);
    printf("My string says: %s\n", my_str->str);

    printf("Simple print wrapper says: ");
    print(my_str);

    printf("Let's try a pretty print: \n");
    int value = 5;
    char *str2 = "Here is my five: %i\n";
    String *pretty_str = create_String(str2, strlen(str2));
    string *pretty_str_slice = get_slice(pretty_str);
    print(pretty_str_slice, value);

    printf("Let's try an append: \n");
    append(my_Str, my_str);
    print(get_slice(my_Str));
    printf("Capacity is now: %i", my_Str->capacity);
};