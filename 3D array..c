// Arrays in 3D
#include<stdio.h>

int main(){
    int i,j,k;
    int marks[2][2][3]={
        {{10,20,30},{40,50,60}},
        {{70,80,90},{65,55,30}}
    };
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
                printf("The marks are %d\n",marks[i][j][k]);
            }
        }
    }
    return 0;
}
