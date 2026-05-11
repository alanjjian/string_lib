/*
String Library Implementation
*/

#include <stdlib.h>

typedef struct String {
    int len;
    char* str;
} String;

String* create(char* str, int strlen) {
    String* my_str = malloc(sizeof(String));
    my_str->len = strlen;
    my_str->str = str;
};