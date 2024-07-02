#include<stdio.h>
#include<conio.h>
int main(){
	int x;
	printf("enter your marks");
	scanf("%d",&x);
	switch(x/10){
		case 10:
			printf("A grade");
			break;
		case 9:
			printf("A grade");
			break;
		case 8:
			printf("B grade");
			break;
		case 7:
			printf("C grade");
			break;
		case 6:
			printf("D grade");
			break;
		default:
			printf("Fail");
			break;
	}
}