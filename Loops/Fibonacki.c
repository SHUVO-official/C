#include <stdio.h>
int main()
    {
        int n,first=0,last=1,next;
        printf("Enter a number: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            {
                next=first+last;
                first=last;
                last=next;
            }
        printf("%d",next);
        return 0;    
    }