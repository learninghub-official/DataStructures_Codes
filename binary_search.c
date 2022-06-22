#include<stdio.h>

int binary_srch(int* arr ,int element ){
    int size = sizeof(arr)/sizeof(int) ; 
    printf("Size %d ",size);
    int mid ,low ,high;
    low =0;
    high = size-1;
    //searching started
    while(low<=high){
        mid = (high + low)/2;
        if (arr[mid]==element)
        {
            return mid;
        }
        if (arr[mid]<element)
        {
            low = mid+1;
        }
        else 
        {
            high=mid-1;
        }
    }
    //searching stoped
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,34,56,78,123,678,890};   //for both sorted only
    int size = sizeof(arr)/sizeof(int) ;   // automatic size perdiction formula
    int element =890 ;
    int searchedindex = binary_srch(arr  , element );
    printf("hurray Element %d found at Index %d \n",element, searchedindex);
    return 0;
}