/*Declare variables within different code blocks (enclosed by curly braces) and test 
their accessibility within and outside tho*/



#include <stdio.h>

void blockScopeDemo() {
    int a = 100;
    printf("Q3: Variables in Different Code Blocks\n");
    printf("Inside blockScopeDemo, a = %d\n", a);
    
    {
        int b = 200;
        printf("  Inside inner block 1, a = %d, b = %d\n", a, b);
    }
    
    {
        int c = 300;
        printf("  Inside inner block 2, a = %d, c = %d\n", a, c);
    }
}

int main() {
    blockScopeDemo();
    return 0;
}
