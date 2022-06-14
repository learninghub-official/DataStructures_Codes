// #include<stdio.h>

// int main(){
//     int marks[4];
//     printf("Enter the marks of maths : ");
//     scanf("%d",&marks[0]);
//     printf("Enter the marks of  physics : ");
//     scanf("%d",&marks[1]);
//     printf("Enter the marks of bio : ");
//     scanf("%d",&marks[2]);
//     printf("Enter the marks of chemisrty : ");
//     scanf("%d",&marks[3]);

//     printf("You have entered %d, %d, %d and %d \n",marks[0],marks[1],marks[2],marks[3]);
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int marks[5];
//     for (int i=0;i<5;i++)
//     {
//     printf("Enter the marks of student %d : ", i+1);
//     scanf("%d", & marks[i]);
//     }
//     for (int i=0;i<5;i++)
//     {
//     printf("You Enter the marks of student %d is : %d \n", i+1,marks[i]);
    
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     char arr[] = {'S','f','e'};
//     printf("value of a[0] is : %s \n",arr[0]);
//     printf("value of a[1] is : %s \n",arr[1]);
//     printf("value of a[2] is : %s \n",arr[2]);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i = 34;
//     int *ptr = &i;
//     printf("value of ptr is : %u\n", ptr);
//     *ptr++;
//     printf("value of ptr is : %u\n", ptr);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a =5;
//     int *x = &a;
//     int b = 4;
//     int *y = &b;
//     int result;
//     // result = *x + *y;
//     result = *x - *y;
//     // printf("sum of numbers to the pointer is : %d\n",result);
//     printf("substraction of numbers to the pointer is : %d\n",result);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int marks[4];
//     int *ptr =&marks[0];
//     for (int i =0 ; i<4; i++)
//     {
//         printf("Enter the marks of %d student\n", i+1);
//         scanf("%d", ptr);
//         ptr++;

//     }
//     for (int i =0 ; i<4; i++)
//     {
//         printf("The marks of %d student is %d \n",i+1, marks[i]);
        
//     }
//     return 0;
// }


// #include<stdio.h>
// void print(int *ptr , int n){
//     for(int i =0; i <n ;i++){
//         printf("The value of elements %d is %d \n", i+1, *(ptr+1));
//     }
// }
// int main(){
//     int arr[] = {45,343,56,234,56,54};
//     print(arr , 6);// print value in array using pointers
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n_students = 3;
//     int n_marks = 5;
//     int marks[3][5]; //2d array
//     for(int i =0 ; i<n_students;i++){
//         for(int j =0 ; j<n_marks;j++){
//             printf("Enter the marks of student %d in subject %d : \n",i+1,j+1);
//             scanf("%d",&marks[i][j]);
//         }
//     }
//     for(int i =0 ; i<n_students;i++){
//         for(int j =0 ; j<n_marks;j++){
//             printf("The marks of student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
//         }
//     }
//     return 0;
// }


#include<stdio.h>

int main(){
    int n_students = 3;
    int n_marks = 5;
    int n_school = 2;
    int marks[3][5][2]; // 3d array
    for(int i =0 ; i<n_students;i++){
        for(int j =0 ; j<n_marks;j++){
            for(int k =0;k<n_school;k++){
                printf("Enter the marks of student %d in subject %d of school %d : \n",i+1,j+1,k+1);
            scanf("%d",&marks[i][j][k]);

            }
            
        }
    }
    for(int i =0 ; i<n_students;i++){
        for(int j =0 ; j<n_marks;j++){
            for(int k =0;k<n_school;k++){
                printf("The marks of student %d in subject %d of school %d is : %d \n",i+1,j+1,k+1,marks[i][j][k]);
            }
        }
    }
    return 0;
}