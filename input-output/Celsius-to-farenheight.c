/* This code calculates the farenheight value given celcius .*/
#include <stdio.h>
int main()
    {
        float c,f;
        printf("Enter the celcius value: ");
        scanf("%f",&c);
        f=((c*9)/5)+32;
        printf("The farenheight value is: %f",f );

    }