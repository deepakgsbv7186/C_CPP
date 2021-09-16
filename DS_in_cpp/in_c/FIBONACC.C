#include<stdio.h>

void main(){
int i,n,t1=0,t2=1,next;
clrscr();

printf("Enter the number of terms: ");
scanf("%d",&n);

printf("Fibonacci Series: ");

for(i=1;i<=n;++i){
 printf("%d ",t1);
 next=t1+t2;
 t1=t2;
 t2=next;
 }
getch();
}