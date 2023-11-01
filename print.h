#ifndef HEADER
#define HEADER

union types 
{
    void (*str)(char *);
    void (*chr)(char);
};

typedef struct formats {
    union types func_pointer;
    char format;
} formats_t;

int _printf(const char *, ...);


#endif