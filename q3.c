#include<stdio.h>
int main()
{
    char name[50];
    int age;

    printf("Enter your Name\n");
    scanf("%s",name);

    printf("Enter your Age\n");
    scanf("%d",&age);

    printf("Hello %s!,Your age is %d", name, age);

    return 0;

}