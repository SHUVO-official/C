#include <stdio.h>
int main()
    {
        int n,count=0;
        printf("Enter Number: ");
        scanf("%d",&n);
        int a=n;
        while(n>0)
            {
                n/=10;
                count+=1;
            }
         if(a==0) printf("1");   
         else printf("%d",count);
         return 0;   
    }