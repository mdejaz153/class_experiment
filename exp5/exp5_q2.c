// 2. WAP to read a list of integers and store it in a single dimensional array. 
// Write a C program to count and display positive, negative, odd, and even numbers in an array.

#include <stdio.h>
int main() {
    int n, i, pos = 0, neg = 0, odd = 0, even = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] >= 0) pos++;
        else neg++;
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Positive: %d\nNegative: %d\nEven: %d\nOdd: %d\n", pos, neg, even, odd);
    return 0;
}
