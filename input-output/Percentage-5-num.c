#include <stdio.h>
int main()
    {
        int x1,x2,x3,x4,x5;
        printf("Enter serially 5 value: ");
        scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);
        float percentage=(x1+x2+x3+x4+x5)/5;
        printf("The percentage is: %f",percentage);
    }