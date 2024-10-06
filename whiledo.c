// while do program to calculate cubes of intergers
#include<stdio.h>
int main(){
    int cube, num, count=0;
    printf("Enter the number");
    scanf("%d",&num);
    
    do {
        cube=(num*num*num);
        printf("The number is %d \n",cube);
        num++;
        count++;
    }while (count<5); 
    return 0;
}
