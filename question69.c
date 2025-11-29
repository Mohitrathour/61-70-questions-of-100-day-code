#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;

    if (n < 2) {
        printf("Array needs at least 2 elements.\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max1) 
        {
            max2 = max1;      
            max1 = arr[i];    
        } 
        else if (arr[i] > max2 && arr[i] != max1) 
        {
            max2 = arr[i];    
        }
    }
    if (max2 == INT_MIN) 
    {
        printf("No second largest element found\n");
    } else 
    {
        printf("%d\n", max2);
    }

    return 0;
}