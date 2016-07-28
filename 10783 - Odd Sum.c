#include<stdio.h>
int main()
{
    int a,b,c,d=1,i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        c=0;
        i=a;
        for(;i<=b;i++)
            {if(i%2==1)
                c=c+i;
            }
            printf("Case %d: %d\n",d,c);
            d++;
    }
    return 0;
}
