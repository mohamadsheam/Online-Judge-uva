#include<stdio.h>
int main()
{
int d1,d2,m1,m2,y1,y2,age,t,i=1;
while(scanf("%d",&t)==1)
{
while(t--)
{
    scanf("%d/%d/%d",&d2,&m2,&y2);
    scanf("%d/%d/%d",&d1,&m1,&y1);
    if(d1>d2)
    {   d2=d2+30;
        m1+=1;
    }
    if(m1>m2)
    {
        m2=m2+12;
        y1=y1+1;
    }
    age=y2-y1;
    if(age<0)
    {printf("Case #%d: Invalid birth date\n",i);
    i++;}
    else if(age>130)
    {printf("Case #%d: Check birth date\n",i);
    i++;}
    else
    {printf("Case #%d: %d\n",i,age);
    i++;}
    }
}
return 0;
}
