#include<stdio.h>
#include<string.h>

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
        printf("Student roll no : %d \n" , s1.roll);
                printf("Student cgpa : %f \n" , s1.cgpa);
                    printf("\n");

    struct student s2;
    
    s2.roll =102;
    // s1.name = "Atharv";
    s2.cgpa = 5.5;
    strcpy(s2.name , "Aman Surkar");

    printf("Student name : %s \n" , s2.name);
        printf("Student roll no : %d \n" , s2.roll);
                printf("Student cgpa : %f \n" , s2.cgpa);
                    printf("\n");

    struct student s3;
    s3.roll =103;
    // s1.name = "Atharv";
    s3.cgpa = 9.9;
    strcpy(s3.name , "Ashwini Dhanraj Rewatkar");

    printf("Student name : %s \n" , s3.name);
        printf("Student roll no : %d \n" , s3.roll);
                printf("Student cgpa : %f \n" , s3.cgpa);
                    printf("\n");

    return 0;
}

/*Array of structure*/

// struct student{
//     int roll ;
//     float cgpa;
//     char name[100];
// };

// int main(){
//     struct student ece[100];
//     ece[0].roll =1001;
//     ece[0].cgpa =9.5;
//     strcpy(ece[0].name , "Atharv");

//     printf("name = %s \n" , ece[0].name );
//     printf("roll no :%d \n" , ece[0].roll);
//     printf("Cgpa = %f \n" , ece[0].cgpa);
// }

/*Initializing structure*/

// struct student{
//     int roll ;
//     float cgpa;
//     char name[100];
// };

// int main(){
//     struct student s1 = {1001 , 9.2 , "Atharv"};
//     printf("student roll = %d \n" , s1.roll);
//         printf("student cgpa = %f \n" , s1.cgpa);
//             printf("student name = %s \n" , s1.name);


//     return 0;
// }