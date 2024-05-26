#include<stdio.h>

int main(void){

    int n,temp;

    printf("Enter a number:");

    scanf("%d",&n);

    int array[n];

    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    for(int i=0; i<n; i++){

        n=temp;
        temp=n;
        array[i]=temp;

        printf("The swap array is%d",array[i]);
    }


}