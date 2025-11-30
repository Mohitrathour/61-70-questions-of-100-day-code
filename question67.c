//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, pos, element;
    int arr[100]; 
    printf("enter the sie of array\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the position and the element to be entered\n");
    scanf("%d %d", &pos, &element);
    for (int i = n - 1; i >= pos; i--) 
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
    n++; 
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}