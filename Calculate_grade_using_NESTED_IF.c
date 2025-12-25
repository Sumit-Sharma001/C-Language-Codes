#include<stdio.h>
int main()
{
    int m;
    printf("enter the obtained total marks:");
    scanf("%d",&m);  
    if (m>=90)
    {
     printf("Grade: A\n");
     } 

     else if (m>=75)
      {
         printf("Grade: B\n");
       } 
       else if (m >=50) 
       {
         printf("Grade: C\n");
        }
         else if (m>=33) 
         {
             printf("Grade: D\n");
          } 
    
          else
           {
            printf("Grade: F (Fail)\n");
           }
           return 0;

        }

         