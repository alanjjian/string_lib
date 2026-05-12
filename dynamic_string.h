/*
Header file for the string library
*/

typedef struct String
{
    int len;
    int capacity;
    char *str;
} String;

typedef struct string {
    int len;
    char *str;
};

String *create(char *str, int strlen);
