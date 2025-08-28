#include <stdio.h>
int main()
    {
        float r,area,circumference,pi=3.1416;
        printf("Enter Radius of circle: ");
        scanf("%f",&r);
        area=pi*(r*r);
        printf("Area=%f\n",area);
        circumference=2*pi*r;
        printf("Circumferecnce=%f\n",circumference);
        if(area>circumference) printf("The area is greater than circumference.");
        else printf("The circumference is greater than area.");
    }