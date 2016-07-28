#include<stdio.h>
int main(){
    int e,f,c,s,t,m=0;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&e,&f,&c);
        m=e+f;
        for(s=0;m>=c;s++)
        {
            m=m-c;
            m=m+1;
        }
        if(m==c)
        {
            s++;
            printf("%d\n",s);
        }
        else
            printf("%d\n",s);
    }
return 0;
}
