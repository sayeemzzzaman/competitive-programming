#include<stdio.h>

void calculate_the_maximum(int n, int k)
{
    int max_or=0,max_and=0,max_xor=0,or,and,xor;

    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            and = i&j;
            or = i|j;
            xor = i^j;
            if((or > max_or) && (or < k))max_or=or;
            if((and > max_and) && (and < k))max_and=and;
            if((xor> max_xor) && (xor < k))max_xor=xor;
        }
    }
    printf("%d\n%d\n%d\n",max_and,max_or,max_xor);
}

int main()
{
    int n,k;

    scanf("%d%d",&n,&k);
    calculate_the_maximum(n,k);
}
