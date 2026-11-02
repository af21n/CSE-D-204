#include<stdio.h>
int main(void)
{
    float length,breadth,area;
    printf("enter length and breadth:");
    scanf("%f%f", &length, &breadth);
    area = length * breadth;
    prinf("area of rectangle = %.2f\n", area);
    return 0;
}
