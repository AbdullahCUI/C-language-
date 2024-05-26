#include<stdio.h>

int main(){

    //inilization of the array

int ages[]={10,20,30,40,50,60};

float avg,sum=0;//declaring variable

int length=sizeof (ages)/sizeof(ages[0]);

//add for loop

for(int i=0; i<length; i++){
    sum+=ages[i];//sum all given ages

}
avg=sum/length;//now find avg of the ages

printf("avg age is %.2f",avg);

printf("\n");

}