#include<stdio.h>
int main()
{
    int n,m;
    int arry[n],arry2[m];
    printf("enter the no of elments in array1\n");
    scanf("%d",&n);
    printf("enter the no of elements in array2\n");
    scanf("%d",&m);
    for(int i=0 ; i<=n ; i++)
    {
        printf("enter the element\n");
        scanf("%d",&arry[i]);
    }
    for(int i=0 ; i<=m ; i++)
    {
        printf("enter the element of second element\n");
        scanf("%d",&arry2[i]);
    }
    int c[n+m];
    for(int i=0 ; i<n ; i++)
    {
        c[i]=arry[i];
    }
    for(int i=0 ; i<m ; i++)
    {
        c[n+i]=arry2[i];
    }
    for(int i=0 ; i<n+m ; i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}