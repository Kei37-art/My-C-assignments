// for program to calculate cubes of intergers
#include<stdio.h>
int main(){
    int num, cube, count=0;
    printf("Enter a number");
    scanf( "%d",&num);
    
    for (int count=0; count<=5; count++) {
        cube=(num*num*num);
        printf("the number is %d \n", cube);
        num++;
    }
    return 0;
}
