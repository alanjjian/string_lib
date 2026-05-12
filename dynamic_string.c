/*
String Library Implementation
*/

#include <stdlib.h>
#include <stdio.h>

#include "string.h"

typedef struct String
{
    int len;
    char *str;
} String;

String *create(char *str, int strlen)
{
    String *my_str = malloc(sizeof(String));
    my_str->len = strlen;
    my_str->str = strdup(str);
    return my_str;
};
