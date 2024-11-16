//Structures in c language
/*
Employee structure
author:Kelvin
Reg no:CT101/G/25008/24
date:09/11/24
*/
//preprocessor directves
#include<stdio.h>
struct employee{
    char name[25];
    float salary;
    char department[20];
    int id;
    char email[50];
    
}Employee1,Employee2,Employee3;

int main() {
    struct employee Employee1={
        "John Doe",
        55000.50,
        "Human Resource",
        12345,
        "john.doe@company.com"
    };

    printf("\nEmployee1 details:");
    printf("\nName:%s",Employee1.name);
    printf("\nSalary:%.2f",Employee1.salary);
    printf("\nDepartment:%s",Employee1.department);
    printf("\nID:%d",Employee1.id);
    printf("\nEmail:%s",Employee1.email);

    return 0;
}
