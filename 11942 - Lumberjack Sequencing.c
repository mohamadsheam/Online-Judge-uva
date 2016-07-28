#include<stdio.h>
int main()
{
    int a,b,t,i,arr[11];
    printf("Lumberjacks:\n");
    scanf("%d",&t);
    while(t--){
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1])
    {
        a=0;
       for(i=0;i<9;i++)
       {
            if(arr[i]>arr[i+1])
            a++;

       }


    }

   else if(arr[0]<arr[1])
    {
        a=0;
       for(i=0;i<9;i++)
       {
            if(arr[i]<arr[i+1])
            a++;

       }


    }
    if(a==9)
    printf("Ordered\n");
    else
    printf("Unordered\n");




    }
return 0;
}
