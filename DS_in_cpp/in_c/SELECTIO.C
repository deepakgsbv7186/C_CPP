#include<stdio.h>

void main(){
int i,j,t,n,min,a[10];
clrscr();

printf("Enter number of elements for sorting: ");
scanf("%d",&n);

printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
 scanf("%d",&a[i]);

for(i=0;i<n;i++){
 min=i;
 for(j=i+1;j<n;j++)
  if(a[j]>a[min])
   min=j;

 t=a[i];
 a[i]=a[min];
 a[min]=t;
}

printf("\nSelection Sort\n");
for(i=n-1;i>=0;i--)
printf("%d\t",a[i]);

getch();
}