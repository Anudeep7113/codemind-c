#include <stdio.h>
int main()
{
    int a, j, k = 0, n, t, count = 0;
    scanf("%d", &a);
    a += 1;
    while(1)
    {k=0;
        a++;
        t=a;
        while (t != 0)
        {
            j = t % 10;
            k = j + k * 10;
            t /= 10;
        }
        if (a == k)
        {
            count = 0;
            for (n = 1; n <= a; n++)
            {
                if (a % n == 0)
                    count++;
            }
            if (count == 2)
            {
                printf("%d", a);
                return 0;
            }
        }
    }
    return 0;
}