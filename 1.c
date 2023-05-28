//wap to make a atar square pattern of n*n size 
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
            printf("*");
        }
        printf("\n");
    }
    return 0;
}