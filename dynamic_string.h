/*
Header file for the string library
*/

typedef struct String
{
    int len;
    char *str;
} String;

String *create(char *str, int strlen);
