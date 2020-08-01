#include<stdio.h>
#include<conio.h>

int prims(int cost[7][7],int n,int t[6][2])
{
    int k=0,l=5,i,near[7],j,mincost=0;
    mincost=cost[k][l];
    printf("test 1 %d ",cost[k][l]);
    t[0][0]=k;
     t[0][1]=l;
     for(i=0;i<n;i++)
     {
         if(cost[i][l]<cost[i][k]){
            near[i]=l;
            //printf("%d",near[i]);
            }
         else{
            near[i]=k;
             //printf("%d",near[k]);
             }
     }
        near[k]=near[l]=0;
        for(i=1;i<=n-1;i++)
        {
            min=cost[i][near[i]];
            if(min>cost[i][near[i]])
            {
                min=
            }
            if(near[j]!=0 && cost[j,near[j]])
            t[i][0]=j;
            t[i][1]=near[j];
            mincost=mincost+cost[j,near[j]];
            printf("test 2 %d\t",mincost);
            near[j]=0;
        }
            for(k=0;k<n-1;k++)
              if((near[k]!=0)&&(cost[k,near[k]]>cost[k][j]))
              near[k]=j;


    return (mincost);
}

int main()
{
    int graph[7][7]=    {{1000,28,1000,1000,1000,10,1000},
                        {28,1000,16,1000,1000,10,14},
                        {1000,16,1000,12,1000,1000,1000},
                        {1000,1000,12,1000,1000,1000,18},
                        {1000,1000,1000,1000,1000,25,22},
                        {10,1000,1000,1000,25,1000,1000},
                        {1000,14,1000,18,22,1000,1000}};
    int t[6][2],value=0;
    value=prims(graph,7,t);
    printf("jfiewfnds lkjfioew %d",value);
    return 0;
}
