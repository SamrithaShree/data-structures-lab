//Program to find the maximum number of blocks in tower 1
#include<stdio.h>
#include<algorithm>

int readTowerBlocks(int arr[],int num);
int transferBlocksToTower1(int arr[],int num);

int main(){
    int tests;
    printf("Enter the number of testcases: ");
    scanf("%d",&tests);
    while(tests--){
        int num;
        printf("Enter the number of towers: ");
        scanf("%d", &num);
        int arr[num];

        readTowerBlocks(arr,num);

        transferBlocksToTower1(arr,num);

        printf("The maximum number of blocks in tower 1 is %d\n", arr[0]);
    }
    return 0;
}

//Reading of the blocks of a tower from user input
int readTowerBlocks(int arr[], int num){
    printf("Enter the number of blocks of the tower (separated by a space): ");
    for(int i=0;i<num;i++){
        scanf("%d", &arr[i]);
    }
    return 1;
}

//Transfer of blocks to the tower 1
int transferBlocksToTower1(int arr[], int num){
    std::sort(arr+1,arr+num);

    for(int i=1;i<num;i++){
        if(arr[i]>arr[0]){
            int transfer = (arr[i]-arr[0]+1)/2;
            arr[0] += transfer;
            arr[i] -= transfer;
        }
    }
    return 1;
}

