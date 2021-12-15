#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool sumOfTwo(int [],int,int);

void main(){


int A[] = {2,5,6,7,8,9,10};
int lenght;
// for(;;);
int target = 16;

lenght = sizeof(A)/sizeof(A[0]);


// printf("%ld-%ld",sizeof(A),sizeof(A[0]));
printf("%d\n",lenght);
// int x = ;
printf("%s",sumOfTwo(A,target,lenght)? "true":"false");

}

bool sumOfTwo(int A[] , int target , int lenght){

    int i = 0;
    int j = lenght;

    while(i < j){
        if (A[i]+A[j] == target){
            return true;
        }
        else if(A[i]+A[j] > target){
            j--;

        }else{
            i++;
        }

    }
    return false;

}


