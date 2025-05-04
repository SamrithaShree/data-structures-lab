//program to implement the sorting algorithms
#include <stdio.h>
#include "sort.h"

//function for performing bubble sort
void bubblesort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0){
            break;
        }
    }
}

//function for performing selection sort
void selectionsort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        int minIndex = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

//function for performing insertion sort
void insertionsort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

//function to print the array
void display(int arr[], int n){
    printf("\nThe array is:\n[");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}
