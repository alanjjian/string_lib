/*
Tests the functionality of the string library.
*/

#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "dynamic_string.h"

int main(void)
{
    string *my_str = create_string("Hello, world!");
    printf("My string length: %i\n", my_str->len);
    printf("My string says: %s\n", my_str->str_slice);

    String *my_Str = create_String("Hello, world!");
    printf("My String length: %i\n", my_Str->len);
    printf("My String says: %s\n", my_Str->str_slice->str_slice);
};