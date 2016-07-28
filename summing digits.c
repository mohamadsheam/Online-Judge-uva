#include<stdio.h>
int main()
{
    long int n;
    while(scanf("%ld",&n)==1 && n!=0 )
    {
            long int i,s;
            if(n<10)

                printf("%ld\n",n);
                if(n>9){

            while(n>9){
                    s=0;
            for(i=0;i<10;i++)
            {

                s+=n%10;
                n/=10;
            }
            n=s;

            }
             printf("%ld\n",s);

        }


    }
    return 0;
}
