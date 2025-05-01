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
    int arr[100]; // Fixed size for demo; can be dynamic with malloc if needed

    while (1){
        printf("\nMain Menu:\n");
        printf("1. Sorting Menu\n");
        printf("2. Searching Menu\n");
        printf("3. Exit\n");

        printf("Enter your option: ");
        scanf("%d", &option);

        if (option == 1){
            int sort_option;
            printf("\nSorting Menu:\n");
            printf("1. Bubble Sort\n");
            printf("2. Selection Sort\n");
            printf("3. Insertion Sort\n");
            printf("4. Back\n");

            printf("Choose a sorting algorithm: ");
            scanf("%d", &sort_option);

            if (sort_option >= 1 && sort_option <= 3) {
                printf("Enter the number of elements: ");
                scanf("%d", &n);
                printf("Enter the elements: ");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }

                switch (sort_option) {
                    case 1: bubblesort(arr, n); break;
                    case 2: selectionsort(arr, n); break;
                    case 3: insertionsort(arr, n); break;
                }

                display(arr, n);
            }

        } else if (option == 2){
            int search_option;
            printf("\nSearching Menu:\n");
            printf("1. Linear Search\n");
            printf("2. Binary Search\n");
            printf("3. Back\n");

            printf("Choose a search algorithm: ");
            scanf("%d", &search_option);

            if (search_option == 1 || search_option == 2) {
                printf("Enter the number of elements: ");
                scanf("%d", &n);
                printf("Enter the elements: ");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }

                printf("Enter the key to search: ");
                scanf("%d", &key);

                if (search_option == 1) {
                    result = linearsearch(arr, n, key);
                } else {
                    bubblesort(arr, n); // Sorting before binary search
                    result = binarysearch(arr, n, key);
                }

                if (result == -1){
                    printf("Element not found.\n");
                } else {
                    printf("Element found at index: %d\n", result);
                }
            }

        } else if (option == 3){
            break;
        } else {
            printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}
