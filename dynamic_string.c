/*
String Library Implementation. It mirrors the way that strings are set up in Rust.
*/

#include <stdlib.h>
#include <stdio.h>

#include "string.h"

typedef struct String
{
    // Equivalent to the Rust String. It contains a length, capacity, and a pointer to a string on heap memory.
    int len;
    int capacity;
    char *str;
} String;

typedef struct string
{
    // Equivalent to the Rust &str. It contains a length, and a pointer to a string *slice* on heap memory.
    int len;
    char *str;
} string;

String *create(char *str)
{
    // Returns a dynamic string with capacity and length equal to the STRLEN
    String *my_str = malloc(sizeof(String));
    my_str->len = strlen(str);
    my_str->str = malloc(my_str->len);
    memcpy(my_str->str, str, my_str->len);
    my_str->capacity = strlen;
    return my_str;
};

/*
string* get_slice(String *str, int start, int finish) {
    // Returns a dynamic string slice exclusive of end.
    int
}
    */