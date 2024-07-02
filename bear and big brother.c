#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    while(a<b){
        a*=3;
        b*=2;
        c+=1;
    }
    printf("%d",c);
}