#include<stdio.h>
#include <stdlib.h>

int main()
{
   int a[200000],b[200000],c[200000],d[200000],result[200000],j,n;
   int i,temp;

 scanf("%d",&t);
 while(t>0)
 {

   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       scanf("%d",&b[i]);
       scanf("%d",&c[i]);
       scanf("%d",&d[i]);

   }
  
       temp1=x;
   for(i=1;i<n;i++)
   {
       
       if(x!=temp1)
       {    temp1=200000;

           break;
       }

   }
   
   for(i=1;i<n;i++)
   {
       
 }
   

   for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(d[i]>d[j])
            {
                temp=d[i];
                d[i]=d[j];
                d[j]=temp;
            }
        }
    }
   
    for(i=0;i<n;i++)
    {
        sum=sum+(abs(d[s]-d[i]));
    }
    result[k]=sum;
    k++;
   }
   else{
    result[k]=-1;
    k++;
   }
   t--;
   printf("%d",result[k-1]);
}

   return 0;
}
