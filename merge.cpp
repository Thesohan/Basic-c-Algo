#include<iostream>
using namespace std;
void  part(int[],int ,int);
void merge_sort(int[],int,int,int);
int main()
{
  int i,a[111],n;
  cout<<"enter no. of elements\n";
  cin>>n;
  cout<<"enter your elements\n";
  for(i=0;i<n;i++)
   cin>>a[i];
  part(a,0,n-1);
 for(i=0;i<n;i++)
 {cout<<a[i];
  cout<<"\t";
}
}

void part(int a[],int beg,int end)
{
  int mid;
  if(beg<end)
  {
     mid=(beg+end)/2;
     part(a,beg,mid);  //it will do partition of the 1st portion, till each array doesn't have only 1 element
     part(a,mid+1,end); //it will do partition of the 2nd portion, till each array doesn't have only 1 element
     merge_sort(a,beg,mid,end);  //it will merge and sort the two partition
  }
}

void merge_sort(int a[],int beg,int mid, int end)
{ 
  int k,i=0,j=0;
  int temp1[mid-beg+1],temp2[end-mid];
   for(k=0;k<(mid-beg+1);k++)
     temp1[k]=a[beg+k];
   for(k=0;k<end-mid;k++)
     temp2[k]=a[k+mid+1];
    k=beg;
while(i!=mid-beg+1 && j!=end-mid)
{
  if(temp1[i]<=temp2[j])
  {  a[k]=temp1[i];
    i++;
  }
   else
 {  a[k]=temp2[j];
    j++;
   }
k++;
}
    while(j<end-mid)
    { a[k]=temp2[j];
      j++;k++;
   }
  
   while(i<mid-beg+1)
    { a[k]=temp1[i];
      i++;k++;
   } 
}

