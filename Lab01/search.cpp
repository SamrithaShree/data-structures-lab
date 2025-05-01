#include "sort.h"

//Function to perform linear search
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
        
}

//function to perform binary search
int binarysearch(int arr[],int n,int key){
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int middle = (left + right)/2; 
        if (arr[middle] == key){
            return middle; 
        }
        if (arr[middle] < key){
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }
    return -1;
}

/*int main(){
    int n,key,result,option,ctrl;
    //Getting user input
    ctrl=1;
    while(ctrl){
        //Printing menu
        printf("\n\nMenu :\n");
        printf("1.Linear Search\n");
        printf("2.Binary Search\n");
        printf("3.Exit\n");
    
        printf("\nEnter the option: ");
        scanf("%d",&option);

        if((option ==1)||(option ==2)){
            printf("Enter the number of elements in the array: \n");
            scanf("%d",&n);
            
            int arr[n];
            printf("Enter the elements of the array: \n");
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            
            switch(option){
                case 1:
                printf("Enter the target element: \n");
                scanf("%d",&key);
                result = linearsearch(arr,n,key);
                printf("The element is found at %d index\n",result);
                break;
                
                case 2:
                bubblesort(arr,n);
                printf("Enter the target element: \n");
                scanf("%d",&key);
                result = binarysearch(arr,n,key);
                printf("The element is found at %d index\n",result);
                break;
                
            }
        }
        else{
            return 0;
        }
    }
    return 0;
}*/