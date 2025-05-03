//Program to compute the minimal length of prefix to be removed 
#include<stdio.h>
#include<unordered_map>

//Returns the minimal length of the prefix
int min_removal(int arr[],int num, std :: unordered_map<int,int> freq){

    int min_removal =0;
    if(freq.size()==num){
        return min_removal;
    }

    for(int idx=0;idx<num;idx++){
        freq[arr[idx]]--;
        if(freq[arr[idx]]==0){
            freq.erase(arr[idx]);
        }
        if(freq.size() == num-idx-1){
            min_removal = idx+1;
            break;
        }
    }
    return min_removal;
}

int main(){
    int tests;
    printf("Enter the number of testcases: ");
    scanf("%d",&tests);
    while(tests--){
        int num;
        printf("Enter the number of elements in the sequence: ");
        scanf("%d",&num);

        int arr[num];
        std :: unordered_map<int,int> freq;
        printf("Enter the elements of the sequence separated by space: ");
        for(int idx=0;idx<num;idx++){
            scanf("%d",&arr[idx]);
            freq[arr[idx]]++;
        }
        int result = min_removal(arr,num,freq);
        printf("%d\n",result);
    }
    return 0;
}