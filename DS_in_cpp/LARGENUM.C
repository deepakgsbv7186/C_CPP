#include<stdio.h>
#include<conio.h>

void main(){
int arr[20]={4,986,7,3,55,77,55,76,90,234};
int i,value=0;
clrscr();
for(i=0;i<10;i++)
if(arr[i]>value)
value=arr[i];

printf("largest Value: %d",value);
getch();
}
