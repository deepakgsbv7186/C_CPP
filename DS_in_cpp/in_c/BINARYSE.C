#include<stdio.h>
#include<conio.h>

void main(){
int i,low,high,mid,n,search,arr[20],count=0;
clrscr();
printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter %d elements",n);
for(i=0;i<n;i++)
 scanf("%d",&arr[i]);

printf("Enter value to find: ");
scanf("%d",&search);

low=0;
high=n-1;
mid=(low+high)/2;

while(low<=high){
 if(arr[mid]<search){
	count++;
  low=mid+1;
  }
 else if(arr[mid]==search){
 count++;
  printf("%d found at location %d.\n",search,mid+1);
  break;
 }
 else{
	count++;
  high=mid-1;
  }
mid=(low+high)/2;
}

if(low>high)
printf("Not found!");

printf("Number of comparisons: %d",count);
getch();
}

