#include<stdio.h>

#include<math.h>

int main()

{
      
/*  int flag[100000]={0};

        int sq=1,i;

        while(sq*sq<100000)
{
                    
flag[sq*sq]=1;

                    
sq++;

        }
*/
        
int a,b,c,d=0,f=0;

        while(scanf("%d%d",&a,&b)==2 && (a!=0 || b!=0))

        {

        
f=0;

       for(c=a;c<=b;c++)
{
               
// if(flag[c]==1)
 
                  
d=sqrt(c);
 
                   
if(d*d==c)

                        
f++;


         }

         
printf("%d\n",f);

     }
    
return 0;
}
