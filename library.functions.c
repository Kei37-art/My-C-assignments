// fine charges forlibrary books
#include<stdio.h>

int product(int daysOverdue,int fineRate){
    int Amount;
    Amount=daysOverdue*fineRate;
    return Amount;
}
int main(){
    int bookID,dueDate,returnDate,daysOverdue,fineRate,Amount;
    
    printf("Enter the bookID ");
    scanf("%d",&bookID);
    
    printf("enter the due date ");
    scanf("%d",&dueDate);
    
    printf("Enter the returnDate ");
    scanf("%d",&returnDate);
    
    daysOverdue=(returnDate-dueDate);
    
    if (daysOverdue>15){
        fineRate=100;
    }else if (daysOverdue>7){
        fineRate=50;
    }else if(daysOverdue=0){
        fineRate=20;
    }
     printf("bookID %d \n",bookID);
	printf("dueDate %d \n",dueDate);
	printf("returnDate %d \n",returnDate);
	printf("daysOverdue %d \n",daysOverdue);
	printf("fineRate %d \n",fineRate);
	printf("Amount %d \n",Amount);  
    return 0;
}
