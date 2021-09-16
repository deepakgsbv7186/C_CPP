#include<conio.h>
#include<stdio.h>
void main()
{
 int a[10],i,j,k,n;
 clrscr();
 printf("Enter elements for sorting: ");
 scanf("%d",&n);

 printf("Enter %d elements\n",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  for(i=1;i<n;i++){
   k=a[i];
   for(j=i-1;j>=0&&k<a[j];j--)
    a[j+1]=a[j];
   a[j+1]=k;
  }
  printf("\nInsertion Sort\n");

  for(i=0;i<n;i++)
   printf("%d\t",a[i]);

 getch();
}