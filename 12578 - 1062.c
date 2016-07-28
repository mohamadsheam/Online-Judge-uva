#include<stdio.h>
#include<math.h>
#define Pi 2*acos(0.0)
int main()
{
    int t;
    double radious,red,h,green,n;
    scanf("%d",&t);
    while(t--)
    {
       radious=0;
       scanf("%lf",&n);
       radious=n/5;
       h=(n*6)/10;
       red=Pi*radious*radious;
       green=(n*h)-red;
       printf("%.2lf %.2lf\n",red,green);
    }
    return 0;
}
