#include <stdio.h>
//function for perform bubble sort
void bubblesort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swapped = 1;
            }
        }
        if(swapped==0){
            break;
        }
    }
} 

//function for perform selection sort
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex]=temp;
    }
}

//function for performing insertion sort
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

//function to print the array
void display(int arr[],int n){
    printf("\nThe sorted array is:\n");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i<n-1){
            printf(",");
        }
    }
    printf("]\n");
}

int main(){
    int n,option;

    //Getting user input
    while(1){
        //Printing menu
        printf("\nMenu :\n");
        printf("1.Bubble Sort\n");
        printf("2.Selection Sort\n");
        printf("3.Insertion Sort\n");
        printf("4.Exit\n");

        printf("\nEnter the option: ");
        scanf("%d",&option);

        if(option==1 || option==2 || option==3){
            //Getting the array from the user
            printf("Enter the number of elements in the array: \n");
            scanf("%d",&n);
            int arr[n];
            printf("Enter the elements of the array: \n");
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }

            switch(option){
                case 1:
                bubblesort(arr,n);
                display(arr,n);
                break;
                
                case 2:
                selectionsort(arr,n);
                display(arr,n);
                break;
                
                case 3:
                insertionsort(arr,n);
                display(arr,n);
                break;
            }
        }
        else{
            return 0;
        }
    }
    return 0;
}