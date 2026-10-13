#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int firstEx = a + b - c;
    int secondEx = a + b * c;
    int thirdEx = a - b + c;
    int fourEx = a - b * c;
    int fiveEx = a * b + c;
    int sixEx = a * b - c;



    if (firstEx == d || secondEx == d || thirdEx == d || fourEx == d || fiveEx == d || sixEx ==d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}