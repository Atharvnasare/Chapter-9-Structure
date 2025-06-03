#include<stdio.h>
#include<string.h>

// //User defined datatype
// struct student{
//     int roll ;
//     float cgpa ;
//     char name[100];
// };

// int main (){
//     struct student s1;

//     s1.roll =100;
//     // s1.name = "Atharv";
//     s1.cgpa = 9.3;
//     strcpy(s1.name , "Atharv Shamdev Nasare");

//     printf("Student name : %s \n" , s1.name);
//         printf("Student roll no : %d \n" , s1.roll);
//                 printf("Student cgpa : %f \n" , s1.cgpa);

//     return 0;
// }

/*Write a program to store the data of 3 students*/

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
    printf("Student roll : %d \n" , s1.roll);
    printf("Student cgpa : %f \n" , s1.cgpa);
        printf("\n");

    struct student s2;

    s2.roll = 101;
    s2.cgpa = 9.4;
    strcpy(s2.name ,   "Aman Surkar");

    printf("Student name : %s \n" , s2.name);
    printf("Student roll : %d \n" , s2.roll);
    printf("Student cgpa : %f \n" , s2.cgpa);
        printf("\n");


    struct student s3;

    s3.roll = 102;
    s3.cgpa = 9.5;
    strcpy(s3.name , "Ashwini Rewatkar");

    printf("Student name : %s \n" , s3.name);
    printf("Student roll : %d \n" , s3.roll);
    printf("Student cgpa : %f \n" , s3.cgpa);
            printf("\n");


    return 0;
}

