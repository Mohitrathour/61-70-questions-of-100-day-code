//Q61: Search for an element in an array using linear search.
#include<stdio.h>
int main()
{
    int n,i,key,found=-1;
    int arry[n];
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        printf("enter the value \n");
        scanf("%d",&arry[i]);
    }
    printf("enter the element to search\n");
    scanf("%d",&key);
    for(int i=0 ; i<n ; i++)
    {
        if(arry[i]==key)
        {
            found=i;
            break;
        }
    }   
    if(found!=-1)
    {
        printf("found at index %d",found);
    }
    else
    {
        printf("-1");
    }
    return 0;
}