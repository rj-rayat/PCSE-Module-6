#include <stdio.h>

int main()
{  
    int t;
    scanf("%d", &t);
    if (t > 15){
        return 0;
        
    }

    for (int i = 1; i <=t; i++)
    {
       
        long long int n;
        scanf("%lld", &n);
        
        if (n > 0 && n <= 20)
        {   
            
            long long int factorial = n;
            for (int i = n;  i > 1 ; i--)
            {
                long long int calculate = i - 1;
                factorial = factorial * calculate;
             }

             printf("%lld\n",factorial);      
        }
        else if (n == 0)
        {
            printf("%d\n", 1);
        }

        else
        {
            
            return 0;
        } 

        
    }
}