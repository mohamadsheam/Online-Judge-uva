#include<stdio.h>
int main()
{
    int i,s,o=1;
    double f,final,c,d;
    scanf("%d",&s);

        while(s--)
        {
            scanf("%lf%lf",&c,&d);
             f = (9*c/5+32)+d;
             final = (f*5-160)/9;
            printf("Case %d: %.2lf\n",o,final);
            o++;
        }
    return 0;
}
