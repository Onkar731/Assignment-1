/* WAP to print the name of the user in double quotes */

#include<stdio.h>
int main() {

    char name[20];

    printf("Enter your name : ");
    gets(name);
    printf("\"Hello, %s\"",name);
    return 0;
}