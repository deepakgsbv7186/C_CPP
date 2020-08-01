#include<stdio.h>
#include<conio.h>

void main(){
int array[20],n,i,j,swap,loop=0,comp=0;
clrscr();
printf("Welcome to Bubble Sort\n\n");
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);

for(i=0;i<n-1;i++)
for(j=0;j<n-i-1;j++){
loop++;
if(array[j]>array[j+1]){
swap=array[j];
array[j]=array[j+1];
array[j+1]=swap;
comp++;
}
}
printf("Sorted List in ascending order\n");

for(i=0;i<n;i++)
printf("%d ",array[i]);

printf("\nNumber of loops: %d",loop);
printf("\nNumber of comparisons: %d",comp);
getch();
}