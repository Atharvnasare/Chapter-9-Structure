#include<stdio.h>
#include<string.h>

//User defined datatype
struct student{
    int roll ;
    float cgpa ;
    char name[100];
};

int main (){
    struct student s1;

    s1.roll =100;
    // s1.name = "Atharv";
    s1.cgpa = 9.3;
    strcpy(s1.name , "Atharv Shamdev Nasare");

    printf("Student name : %s \n" , s1.name);
        printf("Student roll no : %d \n" , s1.roll);
                printf("Student cgpa : %f \n" , s1.cgpa);

    return 0;
}