#include<stdio.h>

void main(){
int base,exponent;
long long result=1;
clrscr();
printf("Enter a base and exponent number: ");
scanf("%d %d",&base,&exponent);

while(exponent!=0){
 result=result*base;
 --exponent;
 }

 printf("Answer: %lld",result);
getch();
}