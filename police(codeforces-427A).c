#include<stdio.h>
#include<conio.h>
int main(){
    int n,a[100000],i,j;
    scanf("%d",&n);
    int ut=0;
    int p=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            p+=a[i];
        }
        else{
            p+=a[i];
            if(p<0){
                p=0;
                ut+=1;
            }
        }
    }
    printf("%d",ut);
}