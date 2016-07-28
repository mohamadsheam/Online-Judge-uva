#include<stdio.h>
int main()
{
    int l,w,h,t,i=1;
    scanf("%d",&t);
    {
        while(t--)
        {
            scanf("%d%d%d",&l,&w,&h);
            if(l<=20 && w<=20 && h<=20)
            printf("Case %d: good\n",i);
            else
            printf("Case %d: bad\n",i);
            i++;
        }
    }
    return 0;
}
