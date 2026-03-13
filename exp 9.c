#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;   // element found

        else if (arr[mid] < key)
            low = mid + 1;   // search in right half

        else
            high = mid - 1;  // search in left half
    }

    return -1; // element not found
}

int main() {
    int arr[100], n, key, result, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if(result != -1)
        printf("Element found at position %d\n", result + 1);
    else
        printf("Element not found\n");

    return 0;
}
