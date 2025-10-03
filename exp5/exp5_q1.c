// 1. WAP to read a list of integers and store it in a single dimensional array. 
// Write a C program to print the second largest integer in a list of integers.

#include <stdio.h>
int main() {
    int n, i, largest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = second = -2147483648;
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    if(second == -2147483648) {
        printf("No second largest element.\n");
    } else {
        printf("Second largest element: %d\n", second);
    }
    return 0;
}
