/*
String Library Implementation. It mirrors the way that strings are set up in Rust.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include "dynamic_string.h"

string *create_string(char *str, int len)
{
    string *my_str = malloc(sizeof(string));
    my_str->len = len;
    my_str->str = malloc(my_str->len);
    memcpy(my_str->str, str, my_str->len);
    return my_str;
};

String *create_String(char *str, int len)
{
    // Returns a dynamic string with capacity and length equal to the STRLEN
    String *my_str = malloc(sizeof(String));
    my_str->len = len;
    my_str->capacity = my_str->len;
    my_str->str = malloc(my_str->len);
    memcpy(my_str->str, str, my_str->len);
    return my_str;
};

string *slice_String(String *str, int start, int end)
{

    // Like calling &String in rust. Convert a String to a string
    // TODO: Error checking
    int len = end - start;
    return create_string(&(str->str)[start], len);
};

string *get_slice(String *str)
{
    return create_string(str->str, str->len);
};

void free_String(String *str)
{
    // free function for strings
    free(str->str);
    free(str);
}

void free_string(string *str)
{
    free(str->str);
    free(str);
}

void append(String *Str, string *str)
{

    // Edits first string in place, appending str to the end of Str

    int new_len = Str->len + str->len;
    if (new_len > Str->capacity)
    {
        while (new_len > Str->capacity)
        {
            Str->capacity *= 2;
        };
        Str->str = realloc(Str->str, Str->capacity);
    }
    memcpy(&(Str->str)[Str->len], str->str, str->len);
    Str->len = Str->len + str->len;
};

void print(string *str, ...)
{
    va_list args;
    char *my_str = malloc(str->len);
    char *null_terminator = "";
    memcpy(my_str, str->str, str->len + 1);
    memcpy(&my_str[str->len], null_terminator, 1); // Add null terminator to end of string
    va_start(args, str);
    vfprintf(stdout, my_str, args);
    va_end(args);
    free(my_str);
}
