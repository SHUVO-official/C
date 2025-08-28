#include <stdio.h>
    int main() 
        {
            int n;
            scanf("%d",&n);
            switch(n)
                {
                    case 1:
                    printf("Saterday");
                    break;

                    case 2:
                    printf("Sunday");
                    break;

                    case 3:
                    printf("Monday");
                    break;

                    case 4:
                    printf("Tuesday");
                    break;
                     
                    case 5:
                    printf("Wednesday");
                    break;

                    case 6:
                    printf("Thusday");
                    break;

                    case 7:
                    printf("Friday");
                    break;

                    default:
                    printf("Invalid");
                }
        }
