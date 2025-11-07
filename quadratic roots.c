#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float D,r1,r2,rp,ip;
	printf("Enter coefficients a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	D=b*b-4*a*c;
    if(D>0)
	{
		r1=(-b+sqrt(D))/(2*a);
		r2=(-b-sqrt(D))/(2*a);	
		printf("root1=%.2f,root2=%.2f",r1,r2);
	}
	else if(D==0)
	{
		r1=r2=-b/(2*a);
		printf("root1=root2=%.2f",r1);
	}
	else
	{
		rp=-b/(2*a);
		ip=sqrt(-D)/(2*a);
		printf("root1=%.2f+i%.2f and",rp,ip);
		printf(" root2=%.2f-i%.2f",rp,ip);
	}
	return 0;
}
