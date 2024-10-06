
//C variables and data types
#include<stdio.h>
int main(){
    char a;
    char name[]={};
    int age;
    float area;
    double salary;
    
    printf("Enter a character");
    scanf("%c",&a);
    printf("The character is %c \n",a);
    
    printf("enter your name");
    scanf("%s",&name);
    printf("The string is %s \n",name);
    
    printf("Enter your age");
    scanf("%d",&age);
    printf("The interger is %d \n",age);
    
    printf("enter the area");
    scanf("%f",&area);
    printf("The floater is %.3f \n",area);
    
    printf("Enter the salary");
    scanf("%lf",&salary);
    printf("The double is %.2lf kenyan shillings \n",salary);
    return 0;
}
