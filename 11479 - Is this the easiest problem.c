#include<stdio.h>
int main()
{
    signed long long a,b,c;
    int t,i;
    scanf("%d",&t);
    i=1;
    while(t--)
    {
    scanf("%llu%llu%llu",&a,&b,&c);
    if((a+b)<=c || (b+c)<=a || (a+c)<=b )
            printf("Case %d: Invalid\n",i);
    else if(a==b && b==c)
            printf("Case %d: Equilateral\n",i);
    else if(a==b || b==c || c==a)
            printf("Case %d: Isosceles\n",i);
    else if(a!=b && b!=c && c!=a)
            printf("Case %d: Scalene\n",i);
    i++;
        }
    return 0;
}
