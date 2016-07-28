#include<stdio.h>
int main()
{
    long h,o,hd;
    while( scanf("%ld %ld",&h,&o)==2)
        {
            if(h>o){
            hd=h-o;
            }
            else
            {hd=o-h;}
            printf("%ld\n",hd);
        }
    return 0;
}
