#include<stdio.h>
int main(){
	int x=0,n;
	printf("enter your number: ");
	scanf("%d",&n);
//	for(int i=1;i<=n;i++)
//	   x=x^i;
//	printf("%d",x);
    if(n%4==1) printf("%d",1);
    if(n%4==2) printf("%d",n+1);
    if(n%4==3) printf("%d",0);
    if(n%4==0) printf("%d",n);
		return 0;
	}