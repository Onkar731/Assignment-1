/* WAP to take date as an input in below given format and convert the date format and display the result as given below */
/* User Input Date Format :- DD/MM/YYYY
   Output Format :- Day - DD, Month - MM, Year - YYYY
*/

#include<stdio.h>
int main() {
    
    int dd, mm, yy;

    printf("Enter Date (DD/MM/YYYY) : ");
    scanf("%d/%d/%d",&dd,&mm,&yy); // scanf format to take formatted input from the user

    printf("Day - %d, Month - %d, Year - %d", dd, mm, yy); // printing date
    return 0;
}