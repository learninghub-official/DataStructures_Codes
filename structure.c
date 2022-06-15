// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };
// int main(){
//     int i = 23;
//     float salar = 43.3;
//     struct employee e1;
//     e1.code = 23;
//     e1.salary = 98.34;
//     // e1.name = "Mayank"; 
//     strcpy(e1.name , "Mayank");
//     printf("%d\n",e1.code);
//     printf("%.3f\n",e1.salary);
//     printf("%s\n",e1.name);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
struct employee{
    int code ;
    float salary ;
    char name[20];
};

int main(){
    struct employee e1 ,e2, e3;
    printf("Enter the name of employee 1 :\n");
    scanf("%s",e1.name);
    printf("Enter the salary of employee 1 :\n");
    scanf("%f",&e1.salary);
    printf("Enter the code of employee 1 :\n");
    scanf("%d",&e1.code);
    printf("Enter the name of employee 2 :\n");
    scanf("%s",e2.name);
    printf("Enter the salary of employee 2 :\n");
    scanf("%f",&e2.salary);
    printf("Enter the code of employee 2 :\n");
    scanf("%d",&e2.code);
    printf("Enter the name of employee 3 :\n");
    scanf("%s",e3.name);
    printf("Enter the salary of employee 3 :\n");
    scanf("%f",&e3.salary);
    printf("Enter the code of employee 3 :\n");
    scanf("%d",&e3.code);

    printf("You have Entered the name of employee 1 :%s\n", e1.name);
    
    printf("You have Entered the salary of employee 1 :%f\n",e1.salary);
    
    printf("You have Entered the code of employee 1 :%d\n",e1.code);

    printf("You have Entered the name of employee 1 :%s\n", e2.name);
    
    printf("You have Entered the salary of employee 1 :%f\n",e2.salary);
    
    printf("You have Entered the code of employee 1 :%d\n",e2.code);
    
    printf("You have Entered the name of employee 1 :%s\n", e3.name);
    
    printf("You have Entered the salary of employee 1 :%f\n",e3.salary);

    printf("You have Entered the code of employee 1 :%d\n",e3.code);
    
    
    return 0;
}
