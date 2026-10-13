#include <stdio.h>
int main()
{ 
  int n;
  scanf("%d", &n);

    int last = n % 10;
    int first = n / 10;

  if (n > 9)
  {

    if (last == 0)
    {
        printf("YES\n");
    }
   
    else
    {
        

        if (first % last == 0 || last % first == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
  }
  return 0;
}