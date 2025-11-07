#include<stdio.h>
int main() 
{
    int n,i,j,min,t,l,b,r,v;
    scanf("%d", &n);
    int s=2*n-1;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
         t=i;
         l=j;
         b=(s-1)-i;
         r=(s-1)-j;
         min=t;
         if(min>l)
         min=l;
         if(min>b)
         min=b;
         if(min>r)
         min=r;
         v=n-min;
         printf("%d ",v);
        }
        printf("\n");
    }
    return 0;
}
