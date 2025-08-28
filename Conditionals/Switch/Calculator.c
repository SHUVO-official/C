#include <stdio.h>
    int main()
        {
            double a,b;
            char op;
            printf("Enter a & operator & b: ");
            scanf("%lf %c %lf",&a,&op,&b);
            switch(op)
                {
                    case '+':
                    printf("Result: %.3lf",a+b);
                    break;

                    case '-':
                    printf("Result: %.3lf",a-b);
                    break;

                    case '*':
                    printf("Result: %.3lf",a*b);
                    break;

                    case '/':
                        {
                            if(b!=0) printf("Result: %.3lf",a/b);
                            else printf("Math Error");
                        }
                    default :
                    printf("invalid");
                    break;


                }

        }