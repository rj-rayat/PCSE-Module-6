#include <stdio.h>

int main ()
{
    int x;
    scanf("%d", &x);
    int max = 0;
    int n;

    for (int i =1; i <=x; i++)
    {
        
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
        }
    }
    printf("%d", max);
}