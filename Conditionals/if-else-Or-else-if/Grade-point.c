#include <stdio.h>
int main()
    {
        int n;
        scanf("%d",&n);
        if(n>=90 && n<=100) printf("%d= Golden A+",n);
        else if(n>=80) printf("%d= A+",n);
        else if(n>=70) printf("%d= A",n);
        else if(n>=65) printf("%d= A-",n);
        else if(n>=60) printf("%d= B",n);
        else if(n>=50) printf("%d= C",n);
        else if(n>=33) printf("%d= D",n);
        else printf("Fail");
    }