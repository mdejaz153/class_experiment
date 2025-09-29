#include <stdio.h>

/*Declare a global variable outside all functions and use it inside various functions 
 to understand its accessibility. (Variable and Scope of Variable)
*/
int globalVar = 10;

void function1() {
    printf("Inside function1, globalVar = %d\n", globalVar);
}

void function2() {
    globalVar += 5;
    printf("Inside function2, globalVar after modification = %d\n", globalVar);
}

int main() {
    printf("In main, initial globalVar = %d\n", globalVar);
    
    function1();  
    function2();  
    
    printf("In main, globalVar after function calls = %d\n", globalVar);
    
    return 0;
}
