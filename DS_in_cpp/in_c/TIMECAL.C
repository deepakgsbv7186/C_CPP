#include<stdio.h>
#include<time.h>

void main(){
int i;
double total_time;
clock_t start,end;
start=clock();
//time count starts
srand(time(NULL));
for(i=0;i<2500;i++)
printf("Random Number[%d]= %d\n",i+1,rand());
end=clock();
// time cont stops

total_time=((double)(end-start))/CLK_TCK;
//calculate total time

printf("\nTime take to print 25000 random number: %f",total_time);
getch();
}