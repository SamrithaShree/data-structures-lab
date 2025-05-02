#include<stdio.h>
#include <stdlib.h>
#include <math.h>
//function to check if the number is palindrome
bool IsPalindrome(int*num){
    int*temp=(int*)malloc(sizeof(int));
    int*reverse=(int*)malloc(sizeof(int));

    *temp=*num;
    *reverse=0;

    while(*temp>0){
        *reverse=((*reverse)*10)+(*temp%10);
        *temp/=10;
    }
    if((*reverse)==(*num)){
        return true;
    }
    free(temp);
    free(reverse);
    return false;
}
//function to check if the number is Armstrong NUmber
bool IsArmstrong(int*num){
    int*temp=(int*)malloc(sizeof(int));
    int*digits=(int*)malloc(sizeof(int));
    int*sum=(int*)malloc(sizeof(int));

    *temp=*num;
    *digits=0;
    *sum=0;

    while(*temp>0){
        *temp/=10;
        (*digits)++;
    }
    *temp=*num;
    while(*temp>0){
        *sum+=pow((*temp)%10,*digits);
        *temp/=10;
    }
    if((*sum)==(*num)){
        return true;
    }
    free(temp);
    free(digits);
    free(sum);
    return false;
}

bool IsPerfect(int*num){
    int*temp=(int*)malloc(sizeof(int));
    int*i=(int*)malloc(sizeof(int));
    int*sum=(int*)malloc(sizeof(int));

    *temp=*num;
    *sum=0;
    for((*i)=1;(*i)<=(*num)/2;(*i)++){
        if((*num)%(*i)==0){
            *sum+=(*i);
        }
    }
    if((*sum)==(*num)){
        return true;
    }
    free(temp);
    free(i);
    free(sum);
    return false;
}

int main(){
    int *option=(int*)malloc(sizeof(int));
    int *num1=(int*)malloc(sizeof(int));
    *num1=0;
//Getting the user input
    while(1){
        printf("Menu: \n");
        printf("1.Palindrome Number\n");
        printf("2.Armstrong Number\n");
        printf("3.Perfect Number\n");
        printf("4.Exit\n");

        printf("Enter your choice:");
        scanf("%d",option);
        switch(*option){
            case 1:
            printf("Enter a number: \n");
            scanf("%d",num1);
            if(IsPalindrome(num1)){
                printf("The number is Palindrome.\n");
            }
            else{
                printf("The number is not Palindrome.\n");
            }
            break;
            case 2:
            printf("Enter a number: \n");
            scanf("%d",num1);
            if(IsArmstrong(num1)){
                printf("The number is Armstrong Number.\n");
            }
            else{
                printf("The number is not Armstrong Number.\n");
            }
            break;
            case 3:
            printf("Enter a number: \n");
            scanf("%d",num1);
            if(IsPerfect(num1)){
                printf("The number is Perfect Number.\n");
            }
            else{
                printf("The number is not Perfect Number.\n");
            }
            break;
            case 4:
            return 0;
        }
    }
    return 0;
}