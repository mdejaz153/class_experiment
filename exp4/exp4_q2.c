// Declare a local variable inside a function and try to access it outside the function. 
// Compare this with accessing the global variable from within the function.



#include <stdio.h>
int globalVar = 50;

void demoLocalVariable() {
    int localVar = 20;  
    printf("Inside demoLocalVariable, localVar = %d\n", localVar);
    printf("Inside demoLocalVariable, globalVar = %d\n", globalVar); // Accessing global inside function
}

int main() {
    printf("In main, initial globalVar = %d\n", globalVar);
    
    demoLocalVariable();
    globalVar += 10;
    printf("In main, globalVar after modification = %d\n", globalVar);
    
    return 0;
}
