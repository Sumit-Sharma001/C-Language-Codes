#include<stdio.h>
void main()
{
    int rows,col;
    printf("enter the number of rows",rows);
    scanf("%d",&rows);
    printf("enter the number of columns",col);
    scanf("%d",&col);
    int matA[rows][col];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
        printf("enter the elements for mat A:%d%d\t", i,j);
    scanf("%d",&matA[i][j]);
    }
}
printf("Matrix A is \n");
for(int i=0;i<rows;i++)
{
    for(int j=0;j<col;j++)
    {
        printf("%d\t",matA[i][j]);
    }
    printf("\n");
}
int matB[rows][col];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
        printf("enter the elements for mat B%d%d\t",i,j);
    scanf("%d",&matB[i][j]);
    }
}
printf("Matrix B is \n");
for(int i=0;i<rows;i++)
{
    for(int j=0;j<col;j++)
    {
        printf("%d\t",matB[i][j]);
    }
    printf("\n");
}
int s[rows][col];
    for(int i=0;i<rows;i++)
    {

        for(int j=0;j<col;j++)
        {
            s[i][j]=matA[i][j]+matB[i][j];
        }
    }
   
    printf("The sum of the 2 matrix is\n ");
    for(int i=0;i<rows;i++)
    {

        for(int j=0;j<col;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
   
}
