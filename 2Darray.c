//Arrays in c language
/*
author:Kelvin
Reg no:CT101/G/25008/24
date:09/11/24
*/
//preprocessor directves
#include<stdio.h>

int main(){
int i,j;
int marks[2][3]={{64,73,67},{81,76,79}};
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
    }
}

    return 0;
}