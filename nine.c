#include<stdio.h>
#include<string.h>

/*Write a program to store the data of 3 students*/

//User defined datatype
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
//                     printf("\n");

//     struct student s2;
    
//     s2.roll =102;
//     // s1.name = "Atharv";
//     s2.cgpa = 5.5;
//     strcpy(s2.name , "Aman Surkar");

//     printf("Student name : %s \n" , s2.name);
//         printf("Student roll no : %d \n" , s2.roll);
//                 printf("Student cgpa : %f \n" , s2.cgpa);
//                     printf("\n");

//     struct student s3;
//     s3.roll =103;
//     // s1.name = "Atharv";
//     s3.cgpa = 9.9;
//     strcpy(s3.name , "Ashwini Dhanraj Rewatkar");

//     printf("Student name : %s \n" , s3.name);
//         printf("Student roll no : %d \n" , s3.roll);
//                 printf("Student cgpa : %f \n" , s3.cgpa);
//                     printf("\n");

//     return 0;
// }

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

/*Pointer to structure*/

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

//             printf("\n");


//             struct student *ptr = &s1;
//             printf("student roll =%d \n" , (*ptr).roll);
//             printf("student cgpa =%f \n" , (*ptr).cgpa);
//             printf("student name =%s \n" , (*ptr).name);           

            /*Arrow operator*/

//             struct student s1 = {1001 , 9.2 , "Atharv"};
//                 printf("student roll = %d \n" , s1.roll);

//                 struct student *ptr = &s1;
//                     printf("student -> roll =%d \n" , ptr ->roll);

//     return 0;
// }

/*Passing structure to function*/

//     struct student{
//         int roll ;
//         float cgpa;
//         char name[100];
// };

// void printInfo(struct student s1);

//     int main(){
//         struct student s1 ={1001 , 9.2 , "Atharv Shamdev Nasare"};
//     printInfo(s1);

// return 0;
// }

// void printInfo(struct  student s1){

//     printf("student information : \n");
//     printf("\n");

//     printf("student.roll =%d \n" , s1.roll);
//     printf("student.cgpa =%f \n" , s1.cgpa);
//     printf("student.name =%s \n" , s1.name);  
// }

/*Typedef keyword*/

// typedef struct student {
//     int roll ;
//     float cgpa ;
//     char name [100];

// }coe;

// int main() {
//     coe s1;
//     s1.roll = 10020;
//     s1.cgpa = 9.2;
//     strcpy(s1.name , "sharadha");


//     printf("Student name is %s and i have got %f and my roll no is %d \n" , s1.name , s1.cgpa , s1.roll);
// }

/*Que . Enter Address (house no , Block , CIty , state)of 5 people*/

struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main(){
    struct address adds[5];

    //input
    printf("Enter info for Person No 1 :");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block );
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter info for Person No 2 :");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block );
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter info for Person No 3 :");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block );
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter info for Person No 4 :");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block );
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter info for Person No 5 :");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block );
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    return 0;
}

void printAdd(struct address add){
    printf("Address is : %d , %d , %s , %s \n" , add.houseNo , add.block , add.city , add.state);
}