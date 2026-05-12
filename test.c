/*
Tests the functionality of the string library.
*/

#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "dynamic_string.h"

int main(void)
{
    String *my_str = create("Hello, world!", strlen("Hello, world!"));
    printf("My string length: %i\n", my_str->len);
    printf("My string says: %s", my_str->str);
};