#include<stdio.h>
int main()
{
    int n,i;
    long a;
    while(scanf("%d",&n)==1 && (n>=0))
        {
            a=1;
            for(i=0;i<=n;i++){
                a+=i;
        }
        printf("%ld\n",a);

}
    return 0;
}
