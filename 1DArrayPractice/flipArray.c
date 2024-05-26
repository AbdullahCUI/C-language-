#include<stdio.h>

int main(void){

    int array[10]={12,13,14,15,16,17,18,19,20,21};

    //flip array out put lik this {21,20,19,18,17,16,15,14,13,12};

    int flip=0, i=0;

    for(int i=0; i<5; i++){

        flip=array[i];
        array[i]=array[10-i-1];

        array[10-i-1]=flip;

    }
    for(int i=0; i<10; i++){
        printf("%d ",array[i]);
    }
    return 0;
}