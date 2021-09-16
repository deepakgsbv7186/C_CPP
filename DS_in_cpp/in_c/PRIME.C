#include<stdio.h>
#include<conio.h>
void main()
{
long int a,i;
char ch;
clrscr();

printf("Prime Number Test\n");
do{
printf("\n\nEnter A Number: ");
scanf("%lu",&a);

for(i=2;i<=a-1;i++)
if(a%i==0)
break;

if(i==a)
printf("%lu is a Prime Number.\n",a);
else
printf("%lu is Not.\n",a);

printf("\nPress 'y' to cotinue(y//n): ");

}while(getch() == 'y');

}