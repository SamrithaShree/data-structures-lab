#include <stdio.h>
#include "sort.h"

//Function to perform linear search
int linearsearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

//function to perform binary search
int binarysearch(int arr[], int n, int key){
    int left = 0, right = n - 1;
    while (left <= right){
        int mid = (left + right) / 2;
        if (arr[mid] == key){
            return mid;
        } else if (arr[mid] < key){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n, key, result, option;

    while (1){
        printf("\nMenu:\n");
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("3. Exit\n");

        printf("\nEnter the option: ");
        scanf("%d", &option);

        if (option == 1 || option == 2){
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            int arr[n];

            printf("Enter the elements: ");
            for (int i = 0; i < n; i++){
                scanf("%d", &arr[i]);
            }

            printf("Enter the key to search: ");
            scanf("%d", &key);

            if (option == 1){
                result = linearsearch(arr, n, key);
            } else {
                bubblesort(arr, n);  // sort before binary search
                result = binarysearch(arr, n, key);
            }

            if (result == -1){
                printf("Element not found.\n");
            } else {
                printf("Element found at index: %d\n", result);
            }

        } else {
            break;
        }
    }

    return 0;
}