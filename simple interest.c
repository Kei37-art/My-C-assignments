//C program to calculate simple interest
#include<stdio.h>
int main(){
    int principle_amount, rate, time, simple_interest;
    
    printf("Enter principle amount ");
    scanf("%d",&principle_amount);
    
    printf("Enter the rate ");
    scanf("%d",&rate);
    
    printf("Enter the time ");
    scanf("%d",&time);
    
    simple_interest=(principle_amount*rate*time)/100;
    
    printf("simple_interest is %d",simple_interest);
    
    return 0;
}
