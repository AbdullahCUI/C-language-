#include<stdio.h>

int main(void){

    //calculate the averge marks of a students

    int noOfmarks;

    printf("Enter the marks of students:\n");
    scanf("%d", &noOfmarks);

    int marksArray[noOfmarks];

    int sum=0
    float avg=0;

    for(int i=0; i<noOfmarks;i++){//read the content form user and store in array
        scanf("%d", &marksArray[i]);
    }
    for(int i=0; i<noOfmarks; i++){ //for for the out put 
        sum+=array[i];//sum all students marks
    }
    avg=sum/noOfmarks;//calculate the averge of the students marks
    prinft("The avegre marks of the students is =%.2f", avg);
}