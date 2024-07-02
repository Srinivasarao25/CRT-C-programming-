//Q1
#include<stdio.h>
int main(){
    for(int x=-1;x<=10;x++){
        if(x<5)
        continue;
        else
        break;
        printf("hi");
    }
}
//output: prints nothing
//q2
#include<stdio.h>
int main(){
    for(int x=-1;x<=10;x++);
        printf("%d",x);
}
//output 11
//q3
#include<stdio.h>
#include<conio.h>
int main(){
	int x=3;
	float y=3.0;
	if (x==y)
		printf("yes");
	
}
//output: yes