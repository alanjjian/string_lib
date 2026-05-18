/*
Header file for our dynamic string implementation
*/

typedef struct string
{
    // Equivalent to the Rust &str. It contains a length, and a
    // pointer to a string *slice* on heap memory.
    int len;
    char *str;
} string;

typedef struct String
{
    // Equivalent to the Rust String. It contains a length, capacity,
    // and a pointer to a string on heap memory.
    int len;
    int capacity;
    char *str;
} String;

String *create_String(char *str, int len);
string *get_slice(String *str);
string *slice_String(String *str, int start, int end);
void append(String *Str, string *str);
void print(string *str, ...);
