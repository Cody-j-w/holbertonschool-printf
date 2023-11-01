#ifndef HEADER
#define HEADER

union types 
{
    void (*str)(char *);
    void (*chr)(char);
}


int _printf(const char *, ...);


#endif