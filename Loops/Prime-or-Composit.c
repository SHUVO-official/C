#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n == 1)
        printf("The number is not prime or composite\n");
    else
    {
        for(int i = 2; i <= n - 1; i++)
        {
            if(n % i == 0)
            {
                printf("Composite\n");
                return 0; // return 0 মানে প্রোগ্রাম এখানেই শেষ
            }
        }
        printf("Prime\n");
        return 0;
    }
}