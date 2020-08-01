#include<conio.h>
#include<stdio.h>
void main()
{
 int i,j,end=0;
 char str1[20]={"Good Evening"};
 char str2[20];
 clrscr();
 for(i=0;str1[i]!='\0';i++){}

 end=i-1;
 for(j=0;j<i;j++){
  str2[j]=str1[end];
  end--;
 }
 str2[j]='\0';
 printf("%s\n",str2);
 printf("%d",i);
 getch();
}