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
}
int matC[rows][col];

    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<col;j++) 
        {
            for(int k=0;k<rows;k++) 
            {
                matC[i][j]+= matA[i][k]*matB[k][j];
            }
        }
    }
printf("\nResultant Matrix");
    for(int i=0;i<rows;i++)
     {
        for(int j=0;j<col;j++) 
        {
            printf("%d\t",matC[i][j]);
        }
        printf("\n");
    }