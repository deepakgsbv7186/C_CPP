#include<conio.h>
#include<stdio.h>

void main(){
int arr[5]={5,7,3,7,8};
int i,a=0,loop=0;
clrscr();
for(i=0;i<5;i++){
loop++;
a=a+arr[i];
}
printf("Sum of array: %d",a);
printf("\nNo. of loop: %d",loop);
getch();
}