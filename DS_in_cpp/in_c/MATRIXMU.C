#include<stdio.h>

void main(){
int i,j,k,sum=0,m=0,s=0;
int a[2][2],b[2][2],mul[2][2];
clrscr();

printf("Enter emements of first matrix\n");
for(i=0;i<2;i++)
 for(j=0;j<2;j++)
  scanf("%d",&a[i][j]);

printf("Enter emements of second matrix\n");
for(i=0;i<2;i++)
 for(j=0;j<2;j++)
  scanf("%d",&b[i][j]);

for(i=0;i<2;i++){
 for(j=0;j<2;j++){
 s++;
  for(k=0;k<2;k++){
  m++;
   sum=sum+a[i][k]*b[k][j];
   }
   mul[i][j]=sum;
   sum=0;
  }
 }
printf("Product of matrices:\n");
for(i=0;i<2;i++){
 for(j=0;j<2;j++)
  printf("%d\t",mul[i][j]);
 printf("\n");
}
// m=total no. of multiply and s=total no. of sums
printf("%d %d",m,s);
getch();
}