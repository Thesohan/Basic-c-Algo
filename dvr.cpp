#include<bits/stdc++.h>
using namespace std;
struct node
{
    unsigned dist[20];
    unsigned from[20];
}rt[10];
int main()
{
    int costmat[40][40];
    int i,noOfNodes,j,k,count=0;
    printf("\ninput number of routers :- ");
    scanf("%d",&noOfNodes);//Enter the noOfNodes
    printf("\ninput the cost matrix :-\n");
    for(i=0;i<noOfNodes;i++)
    {
        for(j=0;j<noOfNodes;j++)
        {
            scanf("%d",&costmat[i][j]);
            costmat[i][i]=0;
            rt[i].dist[j]=costmat[i][j];//initialise the distance equal to cost matrix
            rt[i].from[j]=j;
        }
    }
        do
        {
            count=0;
            for(i=0;i<noOfNodes;i++)
            for(j=0;j<noOfNodes;j++)
            for(k=0;k<noOfNodes;k++)
                if(rt[i].dist[j]>costmat[i][k]+rt[k].dist[j])
                {//We calculate the minimum distance
                    rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
                    rt[i].from[j]=k;
                    count++;
                }
        }while(count!=0);
        for(i=0;i<noOfNodes;i++)
        {
            printf("\n\n For router %d\n",i+1);
            for(j=0;j<noOfNodes;j++)
            {
                printf("\t\nnode %d via %d Distance %d ",j+1,rt[i].from[j]+1,rt[i].dist[j]);
            }
        }
    printf("\n\n");
}