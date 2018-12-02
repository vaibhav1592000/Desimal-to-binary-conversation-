#include<stdio.h>
int main()
{
	int n,r,f=0,d=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;
		f=(f*10)+r;
		n=n/2;
		}
	while(f>0)
		{
			r=f%10;
			d=(d*10)+r;
			f=f/10;
		}
	printf("%d",d);

   	}

