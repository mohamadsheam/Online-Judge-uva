#include<stdio.h>
int main(){
    int n,i,c;
    while(scanf("%d",&i)==1)
    {
     n=i;
    for(c=0;i>=3;c++)
        {
        i=i-3;
        i=i+1;
        }
    if(i==2)
        {
        c++;
        printf("%d\n",c+n);
        }
    else
    printf("%d\n",c+n);
    }
return 0;
}
