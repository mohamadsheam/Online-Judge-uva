#include<stdio.h>
int main()
{
    int t,c=1;
    scanf("%d",&t);
    while(t--)
    {
        int m,A=0,B=0,W=0,T=0,i=0;
        scanf("%d",&m);
        char arr[100];
        scanf("%s",arr);
        for(i=0;i<m;i++)
            {
                if(arr[i]=='A')
                A++;
                else if(arr[i]=='B')
                B++;
                else if(arr[i]=='T')
                T++;
                else if(arr[i]=='W')
                W++;

            }

          if((B+A==m)&& B!=0)
                printf("Case %d: BANGLAWASH\n",c);
            else if((W+A==m) && W!=0)
                printf("Case %d: WHITEWASH\n",c);
            else if(A==m)
                printf("Case %d: ABANDONED\n",c);
            else if(B>W)
                printf("Case %d: BANGLADESH %d - %d\n",c,B,W);
            else if(B<W)
                 printf("Case %d: WWW %d - %d\n",c,W,B);
            else if(B==W)
                printf("Case %d: DRAW %d %d\n",c,B,T);
            c++;

    }
    return 0;
}
