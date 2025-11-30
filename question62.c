//Q62: Reverse an array without taking extra space.
#include<stdio.h>
int main()
{
    int n,m=0;
    int arry[n];
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        printf("enter the value \n");
        scanf("%d",&arry[i]);
    }
    int start=0,end=n-1;
    while(start<end)
    {
        int temp=arry[start];
        arry[start]=arry[end];
        arry[end]=temp;
        start++;
        end--;
    }
    for(int i=0 ; i<n ; i++)
    {
        printf("%d",arry[i]);
    }
    
    return 0;
}