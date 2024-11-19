// C program structures

#include<stdio.h>
#include<string.h>

struct Employee{
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
}employee1;

int main(){
    strcpy(employee1.name,"John Doe");
    strcpy(employee1.department,"Human Resource");
    strcpy(employee1.email,"johndoe@compant.com");
    employee1.salary= 55000.50;
    employee1.id =12345;
    
    printf("Name: %s\n",employee1.name);
    printf("Department: %s\n",employee1.department);
    printf("Email: %s\n",employee1.email);
    printf("Salary: %.2f\n", employee1.salary);
    printf("Id: %d\n",employee1.id);
    
    return 0;
}
