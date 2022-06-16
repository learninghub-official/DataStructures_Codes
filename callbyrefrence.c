#include<stdio.h>
int swap(int *a, int *b);
int Wrongswap(int a, int b);

int main(){

    int a= 3, b=5;
    printf(" after calling swap\n");
    printf("the value  of x and y are %d and %d befor swapping\n",a, b);
    //Wrongswap(a,b); //will not work due to call by value
    swap( &a, &b); // will work due to call by reference
    printf("the value  of x and y are %d and %d after swapping\n",a,b);
    return 0;
}   

int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
    
}
int Wrongswap(int a, int b){
    int temp;
    a = temp;
    a = b;
    b = temp;
}