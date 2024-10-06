//A while program to calculate a cube of an interger
#include<stdio.h>
int main(){
    int num, cube, count=0;
    printf("To calculate the cube of a number: ");
    scanf("%d",&num);
    while (count < 5){
        cube=(num*num*num);
        printf("the number is %d \n", cube);
        num++;
        count++;
    }
    return 0;
    
}
