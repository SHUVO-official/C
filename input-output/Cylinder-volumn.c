#include <stdio.h>
    int main()
        {
            float pi=3.1416,r,volumn,h;
            printf("Enter the radius: ");
            scanf("%f",&r);
            printf("Enter the height: ");
            scanf("%f",&h);
            volumn=pi*(r*r)*h;
            printf("The volumn of the cylinder is: %f",volumn);
        }