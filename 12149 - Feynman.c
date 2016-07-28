#include<stdio.h>
int main()
{
    int a,i,s,b,f;
    while(scanf("%d",&a)==1 && a!=0){
    s=0;
    for(i=1;i<=a;i++)
    {
        for(b=1;b<=i;b++)
        s=i+s;
    }
    printf("%d\n",s);
    }
    return 0;
}
