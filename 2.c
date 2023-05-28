//wap of diagonal line using * sign
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no of inputs:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
                printf("*");
            else
            printf(" ");
        }
        printf("\n"); 
    }
}