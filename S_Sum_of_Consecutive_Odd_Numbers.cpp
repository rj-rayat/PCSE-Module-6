#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0 && n <= 10)
    {
        for (int i = 1; i<= n; i++)
        {

            int x;
            int y;
            int sum = 0;

            scanf("%d %d", &x, &y);
                
            if ( x > y)
            {
                for (int i = y + 1; i <x; i++)
                {
                    if (i % 2 ==1)
                    {
                        sum += i;
                    }
                }
            }
            else
            {
                for (int i = x + 1; i <y; i++)
                {
                    if (i % 2 ==1)
                    {
                       sum += i;
                    }
                }
            }

            printf("%d\n", sum);
        }
    
    }
    else
    {
        return 0;
    }
        


    
}