
#include <stdio.h>

int main ()
{
    int input;
    scanf("%d", &input);
    int x;

    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;
    for (int i =1; i<=input; i++)
    {
        scanf("%d", &x);
        if (x % 2 ==0 )
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (x < 0)
        {
            neg++;
        }
        else if (x > 0)
        {
            pos++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
}

