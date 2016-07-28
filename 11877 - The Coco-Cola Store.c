#include<stdio.h>
int main(){
    int i,c;
    while(scanf("%d",&i)==1)
    {
    if(i==0)
    break;
    for(c=0;i>=3;c++)
    {
    i=i-3;
    i=i+1;
    }
    if(i==2)
    {
    c++;
    printf("%d\n",c);
    }
    else
    printf("%d\n",c);
    }
return 0;
}
