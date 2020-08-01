#include<stdio.h>

void main(){
int a[]={5,10,15,2,10,8,7,10,11,1};
int i=0,count=0;
clrscr();

while(i!=10){
 if(a[i]==10)
  count++;
 i++;
 }

 printf("Element 10 found %d times in array.",count);
getch();
}