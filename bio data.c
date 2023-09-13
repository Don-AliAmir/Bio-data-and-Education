#include<stdio.h>
int main()
{
    char name[100], home[100], date_of_birth[100], age[100], gender[100], KCSE[100], KCPE[100];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Where were you born? ");
    scanf("%s", &home);
    printf("Enter your date of birth: ");
    scanf("%s", & date_of_birth);
    printf("Enter your age: ");
    scanf("%s", &age);
    printf("What is your gender? ");
    scanf("%s", &gender);
    printf("When did you do KCSE? ");
    scanf("%s", &KCSE);
    printf("When did you do KCPE? ");
    scanf("%s", &KCPE);
    printf("My name is %s \n", name);
    printf("i was born in %s \n", home);
    printf("My date of birth is %s \n", date_of_birth);
    printf("I am %s years \n", age);
    printf("My gender is %s \n", gender);
    printf("I did KCSE in %s \n", KCSE);
    printf("I did KCPE in %s \n", KCPE);
    return 0;
}
