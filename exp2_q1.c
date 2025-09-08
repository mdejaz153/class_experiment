/* WAP a C program to calculate the area and perimeter of a rectangle based on its 
length and width. */ 

#include<stdio.h>
int main()
{
    int len,bre,peri,area;
    printf("Enter length of rectangle:");
    scanf("%d",&len);                      //input length
    printf("Enter breadth of rectangle:");
    scanf("%d",&bre);                     //input breadth
    
    //perimeter
    peri=2*(len+bre);
    printf("Perimeter of rectangle is:%d\n",peri);

    //area
    area=len*bre;
    printf("Area of rectangle is:%d",area);
    
    return 0;

}