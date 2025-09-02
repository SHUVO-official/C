// ****
//  ****
//   ****
//    ****

#include <stdio.h>
int main()
    {
        int n;
        printf("Enter N: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            {
                //spaces
                for(int j=1;j<=i-1;j++)
                    printf(" ");

                //star
                for(int k=1;k<=n;k++)
                    printf("*");
                    
                 printf("\n");   
            }
            return 0;
    }