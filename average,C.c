//Grading system for student
#include<stdio.h>
int main(){
    int maths, English, kiswahili;
    float average;
    
    printf("Enter marks for maths ");
    scanf("%d",&maths);
    
    printf("Enter marks for English ");
    scanf("%d",&English);
    
    printf("Enter marks for kiswahili ");
    scanf("%d",&kiswahili);
    
    average=(maths+English+kiswahili)/3;
    
    if (average>=70 && average<=100){
        printf("Grade : A\n");
    }else if (average>=60 && average<=69){
        printf("Grade : B\n");
    }else if (average>=50 && average<=59){
        printf("Grade : C\n");
    }else if (average>=40 && average<=49){
        printf("Grade : D\n");
    }else if (average<40){
        printf("Grade E (fail)\n");
    }else{
        printf("Try again\n");
    }
        return 0;
    }

