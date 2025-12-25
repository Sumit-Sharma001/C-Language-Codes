#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,choice;
    printf("enter the first number",a);
    scanf("%d",&a);
    printf("enter the second number",b);
    scanf("%d",&b);

    printf("Choose operation:\n");
    printf("1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide\n");
    scanf("%d", &choice);

   switch(choice) {
   case 1:
   printf("Sum = %d\n",a+b);
   break;
   case 2:
   printf("Difference = %d\n",a-b);
   break;
   case 3:
   printf("Product = %d\n",a*b);
   break;
   case 4:
   printf("divide = %d\n", a/b);
   break;
  default:
  printf("Invalid choice!\n");
  }
   return 0;
}

