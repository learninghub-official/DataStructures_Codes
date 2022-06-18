#include<stdio.h>
void display(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int linear_srch(int arr[], int size ,int element )
{
    for (int i = 0; i < size ; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }             
    }   
    return -1;  
}
int main(){
    int arr[]={2,3,345,345,24,65,76,24,56,4,5,6};   //for both sorted and unsorted array
    int size = sizeof(arr)/sizeof(int) , element =5 ;
    display(arr , size);
    int searchedindex = linear_srch(arr ,size , element );
    printf("hurray Element %d found at %d\n",element, searchedindex);
    return 0;
}