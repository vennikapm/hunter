#include <stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],k=0,c=0,t,b[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==0)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("%d",b[0]);
        
    }
   else
   {
    for(i=0;i<n;i++)
    {
        for(j=i+i;j<n;j++)
        {
            if(b[i]<b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    
   }
    getch();
}
