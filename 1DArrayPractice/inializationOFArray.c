#include<stdio.h>

int main(){
    //initiliazation of array 
    //valide types

    int arr[5]={1,2,3,4,5};//this valide init array type

    //second type

    int arr1[]={1,2,3,4,5};//valid init compiler is know what is the size of the array

    int arr2[5]={1,2,3};//valid init type b/c the size of the array is greater than the content of the array

    int arr3[5]={0}; //valid init type of the array 

    char var[]={'A','b''d','u','l','l','a','h'};//valid type this array print the char content in the array
    /*
    invalid inilization types
    int var[]={};
    int var1[2]={1,2,3,4};

    */

   printf("%d\n",arr[0]);//i try to print the index 0 value in the array
   printf("%d\n",arr1[3]);//i try to print the index 3 value in the array
   printf("%d\n",arr2[2]);//i try to print the index 2 value in the array
   printf("%d\n",arr3[0]);//i try to print the index 0 value in the array
   printf("%c\n",var[0]);//i try to print the index 0 value in the array
   printf("\n");//new line

}