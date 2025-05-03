//Program to find the strength differences 
#include<stdio.h>
#include<algorithm>

//Returns the strength difference of each participant
int * strengthDifference(int participants,int strengths[]){
    int *differences =  new int[participants];
    int max1 = *std :: max_element(strengths,strengths+participants);
    
    int max2 = -1;
    for(int idx=0;idx<participants;idx++){
        if(strengths[idx]>max2 && strengths[idx]!=max1){
            max2 = strengths[idx];
        }
    }
    if(max2==-1){
        max2 = max1;
    }

    
    printf("The strength differences: ");
    for(int idx=0; idx<participants;idx++){
        if(strengths[idx]==max1){
            printf("%d ",max1-max2);
            differences[idx]=max1-max2;
        }
        else{
            printf("%d ",strengths[idx]-max1);
            differences[idx]=strengths[idx]-max1;
        }
    }
    printf("\n");
    return differences;
}

int main(){
    int tests,participants;
    printf("Enter the number of test cases: ");
    scanf("%d",&tests);

    while(tests--){
        printf("Enter the number of participants: ");
        scanf("%d", &participants);

        int strengths[participants];
        printf("Enter the number of players in each query separated by space: ");
        for(int idx=0;idx<participants;idx++){
            scanf("%d",&strengths[idx]);
        }

        strengthDifference(participants,strengths);
    }
    return 0;
}