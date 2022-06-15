
// Write a program to swap 2 variables without using extra memory.

#include<stdio.h>

int main(){
    int a =4 , b =5 ;
    // int *p;
    // p = &a;
    // int *q; 
    // q = &b;
    printf("Before swapping \n value of a is : %d and b is : %d \n", a ,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping value of a is : %d and b is : %d \n", a , b);
    return 0;
}

