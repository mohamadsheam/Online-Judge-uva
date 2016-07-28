#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,a,s,t;
    int n,cas=1;
    while(scanf("%d",&n)==1 && n!=0){

        if(n==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",cas,s,a);
        }
        else if(n==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",cas,s,t);
        }
        else if(n==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",cas,v,t);
        }
        else
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",cas,u,t);
        }
        cas++;
    }
    return 0;
}
