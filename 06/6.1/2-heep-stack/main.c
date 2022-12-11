#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ¶ÑºÍÕ»µÄ²îÒì
char *print_stack(){
    char *p = "Hello world";
    puts(p);
    return p;
}

char *print_heep(){
    char *p = (char *)malloc(12);
    strcpy(p,"Hello world");
    puts(p);
    return p;
}

int main() {
    char *p;
    p = print_stack();
    puts(p);

    p = print_heep();
    puts(p);
    free(p);
    p = NULL;
    return 0;
}
