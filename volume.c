
//C program to find volume and surface area
#include<stdio.h>
int main(){
    int height, radius, surface_area, volume;
    
    printf("Enter the height ");
    scanf("%d",&height);
    
    printf("Enter radius ");
    scanf("%d",&radius);
    
    surface_area=(2*22/7*radius*radius)+(2*22/7*radius*height);
    
    printf("the surface_area is %d \n",surface_area);
    
    volume=(22/7*radius*radius*height);
    
    printf("The volume %d",volume);
    
    return 0;
}
