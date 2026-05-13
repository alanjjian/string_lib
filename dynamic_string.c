/*
String Library Implementation. It mirrors the way that strings are set up in Rust.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "dynamic_string.h"

string *create_string(char *str)
{
    string *my_str = malloc(sizeof(string));
    my_str->len = strlen(str);
    printf("here's the length when making: %i\n", my_str->len);
    my_str->str_slice = malloc(my_str->len);
    memcpy(my_str->str_slice, str, my_str->len);
    return my_str;
};

String *create_String(char *str)
{
    // Returns a dynamic string with capacity and length equal to the STRLEN
    String *my_str = malloc(sizeof(String));
    string *str_slice = create_string(str);
    my_str->len = str_slice->len;
    my_str->capacity = str_slice->len;
    my_str->str_slice = str_slice;
    return my_str;
};

/*
string* get_slice(String *str, int start, int finish) {
    // Returns a dynamic string slice exclusive of end.
    int
}
    */