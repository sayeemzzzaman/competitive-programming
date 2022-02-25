#include<stdio.h>

int main()
{
    int num,i,rem,sum=0;
    scanf("%d",&num);

    while(num!=0)
    {
        rem = num%10;
        sum+=rem;
        num/=10;
    }
    printf("%d",sum);
}
