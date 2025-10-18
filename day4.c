#include <stdio.h>

void sorting012(int arr[], int n) {
    int temp;
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        switch (arr[mid]) {
case 0:// Swithing the value of 0,1,2 by low,mid and high
     temp = arr[low];
     arr[low] = arr[mid];
     arr[mid] = temp;
        low++;
        mid++;
break;

case 1:
         mid++;
break;
case 2:
    temp = arr[mid];
     arr[mid] = arr[high];
    arr[high] = temp;
        high--;
break;
     }
    }
}

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Taken Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    sorting012(arr, n);
// Printing the sorted array
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}