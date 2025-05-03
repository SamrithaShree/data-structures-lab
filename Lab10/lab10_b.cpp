//Program for computing the scores of the players
#include<stdio.h>
#include<unordered_map>
#include<string>

//Returns the score of three players
void score_calculator(char words[3][1000][4],int num,std :: unordered_map< std::string,int> word_count){
    int score[3] = {0};
    for(int ind=0;ind<3;ind++){
        for(int idx =0;idx<num;idx++){
            if(word_count[words[ind][idx]]==1){
                score[ind] += 3;
            }
            else if(word_count[words[ind][idx]]==2){
                score[ind] += 1;
            }
        }   
    }
    printf("%d %d %d\n",score[0],score[1],score[2]);
}

int main(){
    int tests;
    printf("Enter the number of testcases: ");
    scanf("%d",&tests);
    while(tests--){
        int num;
        printf("Enter the number of words written by each player: ");
        scanf("%d",&num);

        char words[3][1000][4];
        std :: unordered_map< std::string,int> word_count;
        for(int ind =0;ind<3;ind++){
            printf("Enter the words written by the player %d:",ind+1);
            for(int idx = 0; idx < num ; idx++){
                scanf("%s",words[ind][idx]);
                word_count[words[ind][idx]]++;
            }
        }
        score_calculator(words,num,word_count);

    }
    return 0;
}