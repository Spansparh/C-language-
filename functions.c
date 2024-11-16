
/*
Author:Michael Mwaura 
Reg no:CT101/G/24419/24
*/
#include<stdio.h>
#include<math.h>
int sum(int x,int y,int z);//Function prototype
int multiplication(int a,int b,int c);//Function prototype

int main(){
    int a,b,c,x,y,z;
    printf("\nEnter 3 values:\n");
    scanf("\n%d%d%d",&a,&b,&c);

    //Function calling
    x=sum(a,b,c);
    y=sum(100,200,300);
    z=multiplication(a,b,c);

    printf("\nthe sum is:%d",x);
    printf("\nthe 2nd sum is:%d",y);
    printf("\nthe multiplication is:%d",z);

    return 0;
}
//function definition
int sum(int x,int y,int z){
    int results;
    results=x+y+z;
    return results;
}
//function definition
int multiplication(int a,int b,int c){
    int results;
    results=a*b*c;
    return results;
}
