#include<stdio.h>
#include <stdlib.h>

int main()
{
   int a[9999],b[9999],c[9999],d[9999],result[9999],j,n;
   int temp1=0,t,k=0,temp,sum=0,t1,t2,temp2=0,s,x,y,i;

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
   x=abs(c[0]-a[0]);
       temp1=x;
   for(i=1;i<n;i++)
   {
       x=abs(c[i]-a[i]);
       if(x!=temp1)
       {    temp1=9999;

           break;
       }

   }
   y=abs(b[0]-d[0]);
       temp2=y;
   for(i=1;i<n;i++)
   {
       y=abs(b[i]-d[i]);
        if(y!=temp2)
       {    temp2=9999;
                 break;
       }
 }
    printf("temp %d*temp2 %d*",temp1,temp2);

   if(temp1!=9999 || temp2!=9999)
   {
       for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
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
    s=(n/2 );
    temp1=a[s];
       for(i=0;i<n;i++)
    {
        sum=sum+(abs(a[s]-a[i]));
       }
      temp1=d[s];
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
