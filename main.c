#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    r=fun(5);
    printf("%d",r);
    return 0;
}
int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
}

