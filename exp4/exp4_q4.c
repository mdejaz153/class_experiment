/*Declare a static local variable inside a function. Observe how its value persists 
across function calls. */


#include <stdio.h>

void staticVariableDemo() {
    static int count = 0;
    count++;
    printf("Q4: Static Local Variable, count = %d\n", count);
}

int main() {
    staticVariableDemo();
    staticVariableDemo();
    staticVariableDemo();
    
    return 0;
}
