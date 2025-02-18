#include <stdio.h>
#include <limits.h>
int main()
{
    int x = 231;
    int ans = 0;
    int i = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        x = x / 10;
        i++;
    }
    printf("%d",ans);
}