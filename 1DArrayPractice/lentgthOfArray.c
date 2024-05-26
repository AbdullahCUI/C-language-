#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world\n");
    
    int array[]={1,2,3,4,5};//array size if 5 
    
    int len=sizeof(array)/sizeof (array[0]); //we know every intger have 4 bytes now that multiplies bytes*contetn given

    //byest=4 and content is 5 =4*5=20
    //the result is 5
    
    printf("length of the array %d\n", len);
}