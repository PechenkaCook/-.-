#include <stdio.h>

int main() {
    int reactor_core = 12;
    
    int double_core = reactor_core * 2;
    int square_core = reactor_core * reactor_core;

    printf("[");
    printf("%d", reactor_core);
    printf(",");
    printf(" ");
    printf("%d", double_core);
    printf(",");
    printf(" ");
    printf("%d", square_core);
    printf("]\n");

    return 0;
}