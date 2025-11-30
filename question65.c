//Q65: Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, target;
    printf("enter the no\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    int low = 0;
    int high = n - 1;
    int foundIndex = -1; 
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            foundIndex = mid;
            break; 
        } 
        else if (arr[mid] < target) {
            low = mid + 1; 
        } 
        else {
            high = mid - 1; 
        }
    }
    if (foundIndex != -1) {
        printf("Found at index %d\n", foundIndex);
    } else {
        printf("-1\n");
    }
    return 0;
}