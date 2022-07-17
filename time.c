/* WAP to take time as an input in below given format and convert the time format and display the result as given below */
/*
    User Input Date Format :- HH:MM
    Output Format :- HH Hour and MM Minute
*/

#include<stdio.h>
int main() {

    int hh, mm;

    printf("Enter time (HH:MM) : ");
    scanf("%d:%d", &hh, &mm);

    printf("%d Hour and %d Minute",hh, mm);
    return 0;
}