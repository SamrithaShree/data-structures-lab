//Header file declaring sorting and search function prototypes
#ifndef SORT_H
#define SORT_H

#include <stdio.h>

void bubblesort(int arr[], int n);
void selectionsort(int arr[], int n);
void insertionsort(int arr[], int n);
void display(int arr[], int n);

int linearsearch(int arr[], int n, int key);
int binarysearch(int arr[], int n, int key);

#endif
