/*
Header file for our dynamic string implementation
*/

typedef struct string
{
    // Equivalent to the Rust &str. It contains a length, and a pointer to a string *slice* on heap memory.
    int len;
    char *str_slice;
} string;

typedef struct String
{
    // Equivalent to the Rust String. It contains a length, capacity, and a pointer to a string on heap memory.
    int len;
    int capacity;
    string *str_slice;
} String;

String *create_String(char *str);
string *create_string(char *str);
