 // C structures to prompt the user
#include<stdio.h>
#include<string.h>

struct Book {
    char title[30],author[30],ISBN[13];
    int pubYear;
    float price;
} book1;

int main(){
    printf("Enter book name: ");
    scanf("%s",book1.title);
    printf("Enter the author: ");
    scanf("%s",book1.author);
    printf("Enter the ISBN : ");
    scanf("%s",book1.ISBN);
    printf("Enter the Pub Yer: ");
    scanf("%d",&book1.pubYear);
    printf("Enter the price: ");
    scanf("%f",&book1.price);
    
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("ISBN: %s\n", book1.ISBN);
    printf("PubYear: %d\n", book1.pubYear);
    printf("Price: %.2f\n", book1.price);
    
    return 0;
}
