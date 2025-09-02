//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>
int main()
    {
        int n;
        printf("Enter N: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            {
                //spaces
                for(int j=1;i+j<=n;j++)
                    printf(" ");

                //Odd star triangel
                for(int k=1;k<=(2*i-1);k++)
                    printf("*");
                   printf("\n");     
            }
            return 0;
    }