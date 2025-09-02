// *********
// **** ****
// ***   ***
// **     **
// *       *

#include <stdio.h>
int main()
    {
        int n,m;
        printf("Enter m: ");
        scanf("%d",&m);
        n=m-1;
        //উপরের ১ লাইন এর জন্য।
        for(int i=1;i<=(2*m-1);i++)
            printf("*");
            printf("\n");
        //উপরের ১ লাইন বাদে নিচের লাইনগুলোর জন্য। 
        for(int i=1;i<=n;i++)
            {
                //reverse triangel
                for(int j=1;i+j<=n+1;j++)
                    printf("*");

                //Odd star triangel
                for(int k=1;k<=(2*i-1);k++)
                    printf(" ");

                //reverse triangel
                for(int j=1;i+j<=n+1;j++)
                    printf("*");
                 printf("\n");       
            }
            return 0;
    }