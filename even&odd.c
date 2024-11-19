// C program to check odd or even number
#include<stdio.h>

int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    
    if(num %2 == 0){
        printf("The number is even");
    }
    else{
        printf("THe number is odd");
    }
    return 0;
}
