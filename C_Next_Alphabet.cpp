#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    int number = c;
    
    if (number ==  122)
    {
        printf("%c\n", 97 );
    }
    else
    {
        printf("%c\n", number + 1);
    }
        
}