#include <stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],k=0,c=0,t,b[100],i,j,g=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==i)
        {
            b[k]=a[i];
            k++;
            c++;
        }
    }
    if(c>0)
    {
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d",b[i]);
    }
    }
    else
    {
        printf("%d ",g);
    }
    getch();
}
