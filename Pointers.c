// C program to manage simple file operations
#include<stdio.h>
#include<stdlib.h>

int main(){
    char sentence[100];
    printf("Write a sentence: ");
    scanf("%s",&sentence);
    FILE*fptr;
    fptr = fopen("C:\\Users\\User\\Desktop\\data.txt","w");
    if(fptr==NULL){
        printf("Error opening file");
        exit(1);
        
    }
    fscanf(fptr,"%s",&sentence);
    printf("%s\n ",sentence);
    fclose(fptr);
    return 0;
}
