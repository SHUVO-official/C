#include <stdio.h>
int main()
    {
        int sp,cp;
        scanf("%d%d",&sp,&cp);
        if(sp>cp)
            {
                int profit=sp-cp;
                printf("Profit=%d",sp-cp);
            }
        else {
            int lose=cp-sp;
            printf("Lose=%d",cp-sp);
        }    
    }