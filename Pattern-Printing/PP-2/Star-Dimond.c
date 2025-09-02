//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main()
    {
        int n;
        printf("Enter N: ");
        scanf("%d",&n);
        //mid + উপরের লাইন।
        for(int i=1;i<=n;i++)
            {
                //space
                for(int j=1;i+j<=n;j++)
                    printf(" ");

                //odd star triangel
                for(int k=1;k<=(2*i-1);k++)
                    printf("*");
                   printf("\n");     

            }
        //mid বাদে নিচের লাইনগুলো।
        for (int i=n-1;i>=1;i--)
            {
                {
                //space
                for(int j=1;i+j<=n;j++)
                    printf(" ");

                //odd star triangel
                for(int k=1;k<=(2*i-1);k++)
                    printf("*");
                   printf("\n");     

                }
            } 
            return 0;   
    }