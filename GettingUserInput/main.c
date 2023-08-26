#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age;
    double gpa;
    char grade;
    /*
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f", gpa); */

    /*
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c", grade); */

    /*
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s", name); */

    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);



    return 0;
}
