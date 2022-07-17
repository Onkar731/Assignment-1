/* WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format */
/* Output Format :- Area of circle is A having the radius R. Replace A with area & R with radius. */

#include<stdio.h>
int main() {

    float area, radius, pie = 3.14;
    
    printf("Enter radius of circle : ");
    scanf("%f",&radius);

    area = pie * radius * radius; // Calculating area of circle
    printf("Area of circle is %.2f having the radius %f", area, radius);
    return 0;
}