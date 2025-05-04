//program to perform the functions of List ADT - Array implementation

#include<stdio.h>
//defining the size to be 5
#define SIZE 5

class ListADT{
    private:
    int arr[SIZE];
    int count;

    public:
    ListADT(){
        count=0;
        for(int i=0;i<SIZE;i++){
            arr[i]=0;
        }
    }
    
    int insbeg(int value);
    int insend(int value);
    int inspos(int value,int pos);
    int delbeg();
    int delend();
    int delpos(int pos);
    int search(int value);
    void display();
    int rotate(int k);
    void reverse(int start,int end);
    
};


int main(){
    ListADT list;
    int option,value,pos,k;
    
    while(1){
        printf("MENU:\n");
        printf("1.Insertion at Beginning\n");
        printf("2.Insertion at end\n");
        printf("3.Insertion at Position\n");
        printf("4.Deletion at Beginning\n");
        printf("5.Deletion at end\n");
        printf("6.Deletion at Position\n");
        printf("7.Search\n");
        printf("8.Display\n");
        printf("9.Rotate\n");
        printf("10.Exit\n");
        
        printf("Enter your option: ");
        scanf("%d",&option);
        switch(option){
            case 1:
            printf("Enter the value to be inserted: ");
            scanf("%d",&value);
            list.insbeg(value);
            break;

            case 2:
            printf("Enter the value to be inserted: ");
            scanf("%d",&value);
            list.insend(value);
            break;

            case 3:
            printf("Enter the value and the position to be inserted: ");
            scanf("%d %d",&value,&pos);
            list.inspos(value,pos);
            break;

            case 4:
            list.delbeg();
            break;

            case 5:
            list.delend();
            break;

            case 6:
            printf("Enter the position to be deleted at: ");
            scanf("%d",&pos);
            list.delpos(pos);
            break;

            case 7:
            printf("Enter the value to be searched: ");
            scanf("%d",&value);
            list.search(value);
            break;

            case 8:
            list.display();
            break;

            case 9:
            printf("Enter the value of k to which the array is rotated: ");
            scanf("%d",&k);
            list.rotate(k);
            break;

            case 10:
            return 0;
        }
    }
    return 0;
}

//function to insert a value in the beginning of the array
int ListADT :: insbeg(int value){
    if(count==SIZE){
        printf("The list if full\n");
        return 0;
    }
    for(int i=count;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=value;
    count++;
    return 1;
}


//function to insert a value in the end of the array
int ListADT :: insend(int value){
    if(count==SIZE){
        printf("The list if full\n");
        return 0;
    }
    arr[count]=value;
    count++;
    return 1;
}


//function to insert a value in the given position
int ListADT :: inspos(int value,int pos){
    if(count==SIZE){
        printf("The list if full\n");
        return 0;
    }
    if(pos<0 || pos>count){
        printf("Invalid position\n");
        return 0;
    }
    for(int i=count;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    count++;
    return 1;
}


//function to delete the value in the beginning of the array
int ListADT :: delbeg(){
    int num;
    if(count==0){
        printf("The list is empty\n");
        return 0;
    }
    num=arr[0];
    for(int i=0;i<count-1;i++){
        arr[i]=arr[i+1];
    }
    count--;
    return num;
}


//function to delete the value at the end of the array
int ListADT :: delend(){
    int num;
    if(count==0){
        printf("The list is empty\n");
        return 0;
    }
    num=arr[count-1];
    arr[count-1]=0;
    count--;
    return num;
}


//function to delete the value at the given position
int ListADT :: delpos(int pos){
    int num;
    if(count==0){
        printf("The list is empty\n");
        return 0;
    }
    if(pos<0 || pos>=count){
        printf("Invalid position\n");
        return 0;
    }
    num=arr[pos];
    for(int i=pos;i<count-1;i++){
        arr[i]=arr[i+1];
    }
    count--;
    return num;
}


//function to search the given value in the array
int ListADT :: search(int value){
    if(count==0){
        printf("The list is empty\n");
        return 0;
    }
    for(int i=0;i<count;i++){
        if(arr[i]==value){
            printf("The given value is found at the index %d\n",i);
            return 1;
        }
    }
    printf("The given value is not fount in the array\n");
    return 0;
}


//function to display the current array
void ListADT :: display(){
    if(count==0){
        printf("The list is empty\n");
        return;
    }
    printf("The list elements: ");
    for(int i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


//function to reversing an array
void ListADT :: reverse(int start,int end){
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}


//function to rotate the array by the given number of elements
int ListADT :: rotate(int k){
    if(count==0){
        printf("The list is empty\n");
        return 0;
    }

    k=k%count;
    reverse(0,count-1);
    reverse(0,k-1);
    reverse(k,count-1);
    return 1;

}
