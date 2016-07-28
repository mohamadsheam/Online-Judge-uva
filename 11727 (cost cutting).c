#include<stdio.h>
int main()
{
    int a,b,c,n=1,t;
    scanf("%d",&t);
    while(t--)
    {
scanf("%d %d %d",&a,&b,&c)==3;


            if((a>=b && a<=c ) || (a<=b && a >=c))
                printf("Case %d: %d\n",n,a);

            else if ((b>=a   && b<=c ) ||  (b<=a  && b>=c))

                printf("Case %d: %d\n",n,b);

                else if ((c>=a && c<=b) || (c<=a && c>=b))

                    printf("Case %d: %d\n",n,c);
                n++;
    }

    return 0;
}
