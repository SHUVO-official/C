#include <stdio.h>
int fact(int n)
    {
        int fact=1;
        for(int i=2;i<=n;i++)
            fact*=i;
        return fact;    
    }
int combination(int n,int r)
    {
        int nCr=fact(n)/(fact(r)*fact(n-r));
        return nCr;
    }
int main()
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<=n;i++)
            {
                for(int j=0;j<=i;j++)
                    printf("%d ",combination(i,j));
                    printf("\n");
            }
            return 0;
    }