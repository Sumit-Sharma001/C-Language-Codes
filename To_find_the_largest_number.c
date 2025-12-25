#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the first number",a);
    scanf("%d,&a");
    printf("enter the second number",b);
    scanf("%d",&b);
    if(a<b)
    {
        printf("the greatest number between a & b is %d",a);
    }
    else
    printf("the greatest number between a & b is %d",b);
}
