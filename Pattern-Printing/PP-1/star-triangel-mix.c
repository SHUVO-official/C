// * 
// * * 
// * * * 
// * * * * 
// * * * 
// * * 
// *

#include <stdio.h>
int main()
    {
        int n;
        printf("Enter N: ");
        scanf("%d",&n);
        //upper tri=1st 4 row
        for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                    printf("* ");
                 printf("\n");   
            }
        
        //Lower triangel=last 3 row
        for(int i=1;i<=n;i++)
            {
                for(int j=1;i+j<=n;j++)
                    printf("* ");
                  printf("\n");  
            }    
            return 0;
    }