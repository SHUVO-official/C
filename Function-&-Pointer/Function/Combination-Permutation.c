#include <stdio.h>
int fact(int x)
    {
        int fact=1;
        for(int i=2;i<=x;i++)
            {
                fact*=i;
            }
            return fact;
    }
int combination(int n,int r)
    {
        int nCr=fact(n)/(fact(r)*fact(n-r));
        return nCr;
    }
int permutation(int n,int r)
    {
        int nPr=fact(n)/fact(n-r);
        return nPr;
    }        
int main()
    {
        int n,r;
        scanf("%d%d",&n,&r);

        fact(n);
        fact(r);
        fact(n-r);
        
        int nCr=combination(n,r);
        printf("Combination: %d\n",nCr);
        int nPr=permutation(n,r);
        printf("Permutation: %d",nPr);

        return 0;
    }