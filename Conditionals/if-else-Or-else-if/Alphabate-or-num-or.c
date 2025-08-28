#include <stdio.h>
int main()
    {
        char ch;
        printf("Enter the Charecter: ");
        scanf("%c",&ch);
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
             printf("Alphabate=%c",ch);
        else if(ch>='1' && ch<='9') 
            printf("Number=%c",ch);
        else printf("Special charecter=%c",ch);    
            
    }